#include <cstdlib>

#include "Garden.hpp"
#include "Load.hpp"
#include "Mesh.hpp"
#include "LitColorTextureProgram.hpp"
#include "data_path.hpp"

// TODO: add flower mesh data
// TODO: add tangram mesh data

GLuint garden_meshes_for_lit_color_texture_program = 0;
Load<MeshBuffer> garden_meshes(LoadTagDefault, []() -> MeshBuffer const * {
    MeshBuffer const *ret = new MeshBuffer(data_path("garden.pnct"));
    garden_meshes_for_lit_color_texture_program = ret->make_vao_for_program(lit_color_texture_program->program);
    return ret;
});

Load<Garden> loaded_garden(LoadTagDefault, []() -> Garden const * {
    auto *garden = new Garden;
    garden->scene.load(
            data_path("garden.scene"),
            [&](Scene &scene, Scene::Transform *transform, std::string const &mesh_name) {
                Mesh const &mesh = garden_meshes->lookup(mesh_name);
                
                // TODO: remove prints
                fprintf(stderr, "Found mesh with name: %s\n", mesh_name.c_str());
                fprintf(stderr, "Transform has name: %s\n", transform->name.c_str());
                
                if (transform->name == "Small Tulip") {
                    garden->flower_meshes[Flower::Tulip][0] = mesh;
                } else if (transform->name == "Medium Tulip") {
                    garden->flower_meshes[Flower::Tulip][1] = mesh;
                } else if (transform->name == "Big Tulip") {
                    garden->flower_meshes[Flower::Tulip][2] = mesh;
                } else {
                    scene.drawables.emplace_back(transform);
                    Scene::Drawable &drawable = scene.drawables.back();
                    
                    drawable.pipeline = lit_color_texture_program_pipeline;
                    
                    drawable.pipeline.vao = garden_meshes_for_lit_color_texture_program;
                    drawable.pipeline.type = mesh.type;
                    drawable.pipeline.start = mesh.start;
                    drawable.pipeline.count = mesh.count;
                    
                }
            });
    for (size_t i = 0; i < Garden::SIZE; i++) {
        for (size_t j = 0; j < Garden::SIZE; j++) {
            garden->flowers[i][j] = (Flower) ((size_t) rand() % Flower::FlowerCount);
            garden->water[i][j] = 0;
        }
    }
    
    return garden;
});


