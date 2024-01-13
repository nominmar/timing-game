#include <iostream>
#include <cstdlib>
#include <ctime>
#include <tuple>
#include "movement.h"

std::pair<int, int> randomMove() {
    // Return randomly generated pair with axis x(=0) or y(=1) as first element and direction of move along that axis as second element
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int axis = rand() % 2;
    int direction = rand() % 2;
    return std::pair(axis, direction == 0 ? -1 : 1);
}



int main() {
    // Seed the random number generator with the current time
    std::tuple<int, int> movement = randomMove();

    // Print each element in the tuple
    std::cout << "Movement: ";
    std::cout << std::get<0>(movement) << ", ";
    std::cout << std::get<1>(movement) << std::endl;

    return 0;
}