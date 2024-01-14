// definition of player class

#ifndef PLAYER_H
#define PLAYER_H

class Point
{

private:
    int grid_limit = 500;

public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}

    int setGridLimit(const int limit)
    {
        grid_limit = limit;
    }

    void move(int axis, int direction)
    {
        if (axis == 0)
        {
            x += direction;
            if (x < 0 || x > grid_limit)
            {
                x -= direction;
            }
        }
        else if (y < grid_limit)
        {
            y += direction;
            if (y < 0 || y > grid_limit)
            {
                y -= direction;
            }
                }
    }
};

#endif // !PLAYER_H