// functions to move the players on a grid

#ifndef MOVEMENT_H
#define MOVEMENT_H
#include <tuple>

std::pair<int, int> randomMoveParams();
int randomMove(class Point&);
int directionalMove(class Point&, class  Point&);
#endif // !MOVEMENT_H