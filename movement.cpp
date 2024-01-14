#include <iostream>
#include <cstdlib>
#include <ctime>
#include <tuple>
#include "movement.h"
#include "players.h"

std::pair<int, int> randomMoveParams()
{
    // Return randomly generated pair with axis x(=0) or y(=1) as first element and direction of move along that axis as second element
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int axis = rand() % 2;
    int direction = rand() % 2;
    return std::pair(axis, direction == 0 ? -1 : 1);
}

void randomMove(Position &ref_pos)
{
    // Move the refPoint in a random direction along a random axis
    std::pair<int, int> move_params = randomMoveParams();
    ref_pos.step(move_params.first, move_params.second);
}

void directionalMove(Position &ref_point, Position &target_pos)
{
    // Move the targetPoint in the direction of the refPoint along the axis with the greatest distance between the two points
    if (abs(ref_point.x - target_pos.x) > abs(ref_point.y - target_pos.y))
    {
        // Move along x axis
        if (ref_point.x > target_pos.x)
        {
            // Move left
            ref_point.step(0, -1);
        }
        else
        {
            // Move right
            ref_point.step(0, 1);
        }
    }
    else
    {
        // Move along y axis
        if (ref_point.y > target_pos.y)
        {
            // Move down
            ref_point.step(1, -1);
        }
        else
        {
            // Move up
            ref_point.step(1, 1);
        }
    }
};
