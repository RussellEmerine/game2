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
                
                Scene::Drawable::Pipeline pipeline = lit_color_texture_program_pipeline;
                pipeline.vao = garden_meshes_for_lit_color_texture_program;
                pipeline.type = mesh.type;
                pipeline.start = mesh.start;
                pipeline.count = mesh.count;
                
                if (transform->name == "Small Tulip") {
                    garden->flower_pipelines[Flower::Tulip][Maturity::Small] = pipeline;
                    garden->flower_transforms[Flower::Tulip][Maturity::Small] = *transform;
                } else if (transform->name == "Medium Tulip") {
                    garden->flower_pipelines[Flower::Tulip][Maturity::Medium] = pipeline;
                    garden->flower_transforms[Flower::Tulip][Maturity::Medium] = *transform;
                } else if (transform->name == "Big Tulip") {
                    garden->flower_pipelines[Flower::Tulip][Maturity::Big] = pipeline;
                    garden->flower_transforms[Flower::Tulip][Maturity::Big] = *transform;
                } else if (transform->name == "Small Orchid") {
                    garden->flower_pipelines[Flower::Orchid][Maturity::Small] = pipeline;
                    garden->flower_transforms[Flower::Orchid][Maturity::Small] = *transform;
                } else if (transform->name == "Medium Orchid") {
                    garden->flower_pipelines[Flower::Orchid][Maturity::Medium] = pipeline;
                    garden->flower_transforms[Flower::Orchid][Maturity::Medium] = *transform;
                } else if (transform->name == "Big Orchid") {
                    garden->flower_pipelines[Flower::Orchid][Maturity::Big] = pipeline;
                    garden->flower_transforms[Flower::Orchid][Maturity::Big] = *transform;
                } else if (transform->name == "Small Daffodil") {
                    garden->flower_pipelines[Flower::Daffodil][Maturity::Small] = pipeline;
                    garden->flower_transforms[Flower::Daffodil][Maturity::Small] = *transform;
                } else if (transform->name == "Medium Daffodil") {
                    garden->flower_pipelines[Flower::Daffodil][Maturity::Medium] = pipeline;
                    garden->flower_transforms[Flower::Daffodil][Maturity::Medium] = *transform;
                } else if (transform->name == "Big Daffodil") {
                    garden->flower_pipelines[Flower::Daffodil][Maturity::Big] = pipeline;
                    garden->flower_transforms[Flower::Daffodil][Maturity::Big] = *transform;
                } else {
                    scene.drawables.emplace_back(transform);
                    scene.drawables.back().pipeline = pipeline;
                }
            });
    
    for (size_t i = 0; i < Garden::SIZE; i++) {
        for (size_t j = 0; j < Garden::SIZE; j++) {
            // This technically is not uniform but it's not to any noticeable degree
            garden->flowers[i][j] = (Flower) ((size_t) rand() % Flower::FlowerCount);
            garden->water[i][j] = 0;
            garden->grid_positions[i][j].position = glm::vec3();
            garden->grid_positions[i][j].name = Garden::flower_drawable_name(i, j);
            garden->grid_positions[i][j].position = glm::vec3((float) i - 9.5f, (float) j - 9.5f, 0.0f);
        }
    }
    
    return garden;
});

void Garden::remove_flower(size_t row, size_t col) {
    scene.drawables.remove_if([&](Scene::Drawable &drawable) {
        return drawable.transform->name == flower_drawable_name(row, col);
    });
}

void Garden::place_flower(Flower flower, Maturity maturity, size_t row, size_t col) {
    remove_flower(row, col);
    // If it is a seed, then don't actually draw anything
    if (maturity != Maturity::Seed) {
        scene.drawables.emplace_back(&grid_positions[row][col]);
        scene.drawables.back().pipeline = flower_pipelines[flower][maturity];
        scene.drawables.back().transform->rotation = flower_transforms[flower][maturity].rotation;
        scene.drawables.back().transform->scale = flower_transforms[flower][maturity].scale;
    }
}

std::string Garden::flower_drawable_name(size_t row, size_t col) {
    return "Flower:" + std::to_string(row) + ":" + std::to_string(col);
}

void Garden::add_water(double delta, size_t row, size_t col) {
    double old_water = water[row][col];
    double new_water = old_water + delta;
    // This could be a loop but it's easier to think about the edge cases when it's unrolled
    if (old_water < 0.25 && 0.25 <= new_water) {
        place_flower(flowers[row][col], Maturity::Small, row, col);
    } else if (old_water < 0.5 && 0.5 <= new_water) {
        place_flower(flowers[row][col], Maturity::Medium, row, col);
    } else if (old_water < 0.75 && 0.75 <= new_water) {
        place_flower(flowers[row][col], Maturity::Big, row, col);
    } else if (1 <= new_water) {
        new_water = 1;
    }
    water[row][col] = new_water;
}

void Garden::collect(size_t row, size_t col) {
    // TODO: add collected tangram pieces to stash
    remove_flower(row, col);
    flowers[row][col] = (Flower) ((size_t) rand() % Flower::FlowerCount);
    water[row][col] = 0;
}

glm::size2 Garden::find_grid_square(double x, double y) {
    if (x < -10 || 10 < x || y < -10 || 10 < y) {
        return {SIZE, SIZE};
    } else {
        return {(size_t) (x + 10), (size_t) (y + 10)};
    }
}

