#include <algorithm>

#include "PlayMode.hpp"

#include "LitColorTextureProgram.hpp"

#include "DrawLines.hpp"
#include "Mesh.hpp"
#include "gl_errors.hpp"
#include "data_path.hpp"
#include "Garden.hpp"

#include <glm/gtc/type_ptr.hpp>

PlayMode::PlayMode() : garden(*loaded_garden) {
    //get pointer to camera for convenience:
    if (garden.scene.cameras.size() != 1)
        throw std::runtime_error(
                "Expecting scene to have exactly one camera, but it has " +
                std::to_string(garden.scene.cameras.size()));
    camera = &garden.scene.cameras.front();
}

PlayMode::~PlayMode() = default;

bool PlayMode::handle_event(SDL_Event const &evt, glm::uvec2 const &window_size) {
    
    if (evt.type == SDL_KEYDOWN) {
        if (evt.key.keysym.sym == SDLK_ESCAPE) {
            SDL_SetRelativeMouseMode(SDL_FALSE);
            return true;
        } else if (evt.key.keysym.sym == SDLK_a) {
            left.downs += 1;
            left.pressed = true;
            return true;
        } else if (evt.key.keysym.sym == SDLK_d) {
            right.downs += 1;
            right.pressed = true;
            return true;
        } else if (evt.key.keysym.sym == SDLK_w) {
            up.downs += 1;
            up.pressed = true;
            return true;
        } else if (evt.key.keysym.sym == SDLK_s) {
            down.downs += 1;
            down.pressed = true;
            return true;
        }
    } else if (evt.type == SDL_KEYUP) {
        if (evt.key.keysym.sym == SDLK_a) {
            left.pressed = false;
            return true;
        } else if (evt.key.keysym.sym == SDLK_d) {
            right.pressed = false;
            return true;
        } else if (evt.key.keysym.sym == SDLK_w) {
            up.pressed = false;
            return true;
        } else if (evt.key.keysym.sym == SDLK_s) {
            down.pressed = false;
            return true;
        }
    } else if (evt.type == SDL_MOUSEBUTTONDOWN) {
        if (SDL_GetRelativeMouseMode() == SDL_FALSE) {
            SDL_SetRelativeMouseMode(SDL_TRUE);
            return true;
        }
    } else if (evt.type == SDL_MOUSEMOTION) {
        if (SDL_GetRelativeMouseMode() == SDL_TRUE) {
            glm::vec2 motion = glm::vec2(
                    float(evt.motion.xrel) / float(window_size.y),
                    -float(evt.motion.yrel) / float(window_size.y)
            );
            
            // TODO: fine-tune the rotation speed
            
            /*
             * NOTE: every documentation source I've found, including glm's source internal function names, says pitch,
             * yaw, roll. However, this is what works, and it seems to be pitch, roll, yaw, unless I misunderstand what
             * those words mean. No idea why, but it works so it works.
             *
             * Also, as of Sep 12 2023, https://glm.g-truc.net/0.9.0/api/a00184.html totally spells it "eular".
             */
            // gives Euler angles in radians: pitch, roll, yaw, or "pitch, yaw, roll" as they say
            glm::vec3 angles = glm::eulerAngles(camera->transform->rotation);
            // change and bound the pitch
            angles.x = std::clamp(angles.x + motion.y, glm::pi<float>() * 1 / 12, glm::pi<float>() * 11 / 12);
            // change the yaw
            angles.z -= motion.x;
            // roll is always zero
            // TODO: When a scene is loaded in, the camera may not always have roll zero. Find and correct.
            // The fix is needed because wasd will misbehave before the first mouse movement.
            angles.y = 0;
            // make a quaternion from the new camera direction
            // this constructor uses the Euler angles
            camera->transform->rotation = glm::qua(angles);
            return true;
        }
    }
    
    return false;
}

void PlayMode::update(float elapsed) {
    //move camera:
    {
        
        //combine inputs into a move:
        constexpr float PlayerSpeed = 5.0f;
        auto move = glm::vec3(0.0f);
        // using z here because camera points in negative z
        if (down.pressed && !up.pressed) move.z = 1.0f;
        if (!down.pressed && up.pressed) move.z = -1.0f;
        // using x here for horizontal from the camera's perspective
        if (left.pressed && !right.pressed) move.x = -1.0f;
        if (!left.pressed && right.pressed) move.x = 1.0f;
        
        // rotate the movement towards where the camera points
        move = camera->transform->rotation * move;
        // and make it in the horizontal plane after rotation
        move.z = 0.0f;
        // scale it for constant speed
        if (move != glm::vec3(0.0f, 0.0f, 0.0f)) move = glm::normalize(move) * PlayerSpeed * elapsed;
        // and actually move
        camera->transform->position += move;
        // but also don't move out of bounds
        camera->transform->position.x = std::clamp(camera->transform->position.x, -10.0f, 10.0f);
        camera->transform->position.y = std::clamp(camera->transform->position.y, -10.0f, 10.0f);
    }
    
    //reset button press counters:
    left.downs = 0;
    right.downs = 0;
    up.downs = 0;
    down.downs = 0;
}

void PlayMode::draw(glm::uvec2 const &drawable_size) {
    //update camera aspect ratio for drawable:
    camera->aspect = float(drawable_size.x) / float(drawable_size.y);
    
    //set up light type and position for lit_color_texture_program:
    // TODO: consider using the Light(s) in the scene to do this
    glUseProgram(lit_color_texture_program->program);
    glUniform1i((GLint) lit_color_texture_program->LIGHT_TYPE_int, 1);
    glUniform3fv((GLint) lit_color_texture_program->LIGHT_DIRECTION_vec3, 1,
                 glm::value_ptr(glm::vec3(0.0f, 0.0f, -1.0f)));
    glUniform3fv((GLint) lit_color_texture_program->LIGHT_ENERGY_vec3, 1,
                 glm::value_ptr(glm::vec3(1.0f, 1.0f, 0.95f)));
    glUseProgram(0);
    
    glClearColor(0.6f, 0.8f, 0.95f, 1.0f);
    glClearDepth(1.0f); //1.0 is actually the default value to clear the depth buffer to, but FYI you can change it.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS); //this is the default depth comparison function, but FYI you can change it.
    
    GL_ERRORS(); //print any errors produced by this setup code
    
    garden.scene.draw(*camera);
    
    { //use DrawLines to overlay some text:
        glDisable(GL_DEPTH_TEST);
        float aspect = float(drawable_size.x) / float(drawable_size.y);
        DrawLines lines(glm::mat4(
                1.0f / aspect, 0.0f, 0.0f, 0.0f,
                0.0f, 1.0f, 0.0f, 0.0f,
                0.0f, 0.0f, 1.0f, 0.0f,
                0.0f, 0.0f, 0.0f, 1.0f
        ));
        
        constexpr float H = 0.09f;
        lines.draw_text("Mouse motion rotates camera; WASD moves; escape ungrabs mouse",
                        glm::vec3(-aspect + 0.1f * H, -1.0 + 0.1f * H, 0.0),
                        glm::vec3(H, 0.0f, 0.0f), glm::vec3(0.0f, H, 0.0f),
                        glm::u8vec4(0x00, 0x00, 0x00, 0x00));
        float ofs = 2.0f / (float) drawable_size.y;
        lines.draw_text("Mouse motion rotates camera; WASD moves; escape ungrabs mouse",
                        glm::vec3(-aspect + 0.1f * H + ofs, -1.0 + 0.1f * H + ofs, 0.0),
                        glm::vec3(H, 0.0f, 0.0f), glm::vec3(0.0f, H, 0.0f),
                        glm::u8vec4(0xff, 0xff, 0xff, 0x00));
    }
}
