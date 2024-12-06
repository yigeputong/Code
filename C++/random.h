#ifndef RANDOM_H
#define RANDOM_H

#include <random>

int random(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(min, max);
    return dis(gen);
}

#endif