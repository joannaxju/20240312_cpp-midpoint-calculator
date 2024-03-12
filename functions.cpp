#include "header.h"

Coordinate midpoint(Coordinate c1, Coordinate c2)
{
    Coordinate midpoint;
    midpoint.x = (c1.x + c2.x) / 2;
    midpoint.y = (c1.y + c2.y) / 2;
    return midpoint;
}

void print(Coordinate c)
{
    cout << "(" << c.x << ", " << c.y << ")";
}