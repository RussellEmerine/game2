#include "Mode.hpp"
#include "Garden.hpp"
#include "Scene.hpp"

#include <glm/glm.hpp>

#include <vector>
#include <deque>

struct PlayMode : Mode {
    PlayMode();
    
    ~PlayMode() override;
    
    //functions called by main loop:
    bool handle_event(SDL_Event const &, glm::uvec2 const &window_size) override;
    
    void update(float elapsed) override;
    
    void draw(glm::uvec2 const &drawable_size) override;
    
    //----- game state -----
    
    //input tracking:
    struct Button {
        uint8_t downs = 0;
        uint8_t pressed = 0;
    } left, right, down, up;
    
    //local copy of the game scene (so code can change it during gameplay):
    Garden garden;
    
    //camera:
    Scene::Camera *camera = nullptr;
    
};
