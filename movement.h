// functions to move the players on a grid

#ifndef MOVEMENT_H
#define MOVEMENT_H
#include <tuple>

std::pair<int, int> randomMoveParams();
void randomMove(class Position&);
void directionalMove(class Position&, class  Position&);
#endif // !MOVEMENT_H