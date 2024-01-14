// definition of player class

#ifndef PLAYER_H
#define PLAYER_H

class Position
{

private:
    int grid_limit = 500;

public:
    int x, y;
    Position(int x, int y) : x(x), y(y) {}

    void setGridLimit(const int limit)
    {
        grid_limit = limit;
    }

    void step(int axis, int direction)
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