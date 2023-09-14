#pragma once

#include <cstdlib>

/*
 * An enum that represents the different types of flowers.
 *
 * TODO: add other flowers
 */
enum Flower : size_t {
    Tulip,
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
