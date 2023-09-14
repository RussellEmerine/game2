#pragma once

#include <cstdlib>

/*
 * An enum that represents the different types of flowers.
 */
enum Flower : size_t {
    Tulip,
    Orchid,
    Daffodil,
    Iris,
    Cactus,
    FlowerCount
};

/*
 * An enum that represents how mature a flower is.
 */
enum Maturity : size_t {
    Seed,
    Small,
    Medium,
    Big,
    MaturityCount
};
