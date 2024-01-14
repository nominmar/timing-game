#include <iostream>
#include "movement.h"
#include "players.h"
#include "movement.cpp"

const int GRID_LIMIT = 100;
const int EFFORT = 2;
const int MAX_ROUNDS = 1000;

int main()
{
    Position p1(25, 25);
    p1.setGridLimit(GRID_LIMIT);
    Position p2(75, 75);
    p2.setGridLimit(GRID_LIMIT);

    for (int round = 1; round <= MAX_ROUNDS; round++)
    {

        if (p1.x == p2.x && p1.y == p2.y)
        {
            std::cout << "Players have met at (" << p1.x << ", " << p1.y << ") after " << round << " rounds. <3" << std::endl;
            break;
        }
        else if (round % EFFORT == 0)
        {
            directionalMove(p1, p2);
            directionalMove(p2, p1);
        }
        else
        {
            randomMove(p1);
            randomMove(p2);
        }
        std::cout << "Round " << round << std::endl;
        std::cout << "p1: " << p1.x << ", " << p1.y << std::endl;
        std::cout << "p2: " << p2.x << ", " << p2.y << std::endl;
    }

    return 0;
}
