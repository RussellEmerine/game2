#pragma once

#include "Scene.hpp"
#include "Flower.hpp"
#include "Mesh.hpp"
#include "Load.hpp"


struct Garden {
    static constexpr size_t SIZE = 20;
    
    Scene scene;
    
    std::array<std::array<Mesh, 3>, Flower::FlowerCount> flower_meshes;
    
    std::array<std::array<Flower, SIZE>, SIZE> flowers{};
    std::array<std::array<double, SIZE>, SIZE> water{};
    
    // TODO: add tangram frames and data
};

extern Load<Garden> loaded_garden;
