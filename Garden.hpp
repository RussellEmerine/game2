#pragma once

#include <array>
#include <string>
#include <glm/gtx/std_based_type.hpp>

#include "Scene.hpp"
#include "Flower.hpp"
#include "Mesh.hpp"
#include "Load.hpp"


struct Garden {
    static constexpr size_t SIZE = 20;
    
    Scene scene;
    
    // Meshes for the flowers, small, medium, and big versions in that order.
    // `Seed` size variant will be explicitly ignored in code.
    std::array<std::array<Scene::Drawable::Pipeline, MaturityCount>, Flower::FlowerCount> flower_pipelines;
    // Transforms for the flowers, small, medium, and big.
    // Not pointed to, just initialized on construction and copied from.
    // The rotation and scale components here are important, but the position should be ignored.
    // `Seed` size variant will be explicitly ignored in code.
    std::array<std::array<Scene::Transform, MaturityCount>, Flower::FlowerCount> flower_transforms{};
    
    // Just the centers of squares of the grid, filled out on construction.
    // The flowers on the grid have `Transform` pointers, this is what they point to.
    // The position component here is important, but the rotation and scale should be overwritten.
    std::array<std::array<Scene::Transform, SIZE>, SIZE> grid_positions{};
    
    // What type of flower is at a square.
    std::array<std::array<Flower, SIZE>, SIZE> flowers{};
    // How much water a square has (use to decide the maturity of the flower).
    std::array<std::array<double, SIZE>, SIZE> water{};
    
//    // As above, but for unfilled tangrams
//    std::array<Scene::Drawable::Pipeline, SIZE> unfilled_tangram_pipelines;
//    std::array<Scene::Transform,
    
    
    std::array<Scene::Drawable::Pipeline, SIZE> filled_tangram_pipelines;
    
    // TODO: add tangram frames and data
    
    void remove_flower(size_t row, size_t col);
    
    void place_flower(Flower flower, Maturity maturity, size_t row, size_t col);
    
    static std::string flower_drawable_name(size_t row, size_t col);
    
    void add_water(double delta, size_t row, size_t col);
    
    void collect(size_t row, size_t col);
    
    /*
     * Finds the (row, col) corresponding to the x and y coordinates.
     * If it is out of bounds, returns (SIZE, SIZE)
     */
    static glm::size2 find_grid_square(double x, double y);
};

extern Load<Garden> loaded_garden;
