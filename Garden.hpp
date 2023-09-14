#pragma once

#include <array>
#include <string>

#include "Scene.hpp"
#include "Flower.hpp"
#include "Mesh.hpp"
#include "Load.hpp"


struct Garden {
    static constexpr size_t SIZE = 20;
    
    Scene scene;
    
    // Meshes for the flowers, small, medium, and big versions in that order.
    std::array<std::array<Scene::Drawable::Pipeline, 3>, Flower::FlowerCount> flower_pipelines;
    // Transforms for the flowers, small, medium, and big.
    // Not pointed to, just initialized on construction and copied from.
    // The rotation and scale components here are important, but the position should be ignored.
    std::array<std::array<Scene::Transform, 3>, Flower::FlowerCount> flower_transforms{};
    // Just the centers of squares of the grid, filled out on construction.
    // The flowers on the grid have `Transform` pointers, this is what they point to.
    // The position component here is important, but the rotation and scale should be overwritten.
    std::array<std::array<Scene::Transform, SIZE>, SIZE> grid_positions{};
    
    // What type of flower is at a square.
    std::array<std::array<Flower, SIZE>, SIZE> flowers{};
    // How much water a square has (use to decide the maturity of the flower).
    std::array<std::array<double, SIZE>, SIZE> water{};
    
    // TODO: add tangram frames and data
    
    void remove_flower(size_t row, size_t col);
    
    void place_flower(Flower flower, size_t size, size_t row, size_t col);
    
    /*
     * Gets the string that the
     */
    static std::string flower_drawable_name(size_t row, size_t col);
};

extern Load<Garden> loaded_garden;
