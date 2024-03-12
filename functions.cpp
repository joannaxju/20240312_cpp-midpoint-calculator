#include "header.h"

Coordinate<double, double> midpoint(Coordinate<int, int> c1, Coordinate<int, int> c2)
{
    Coordinate<double, double> midpoint;
    midpoint.x = (c1.x + c2.x) / 2.0;
    midpoint.y = (c1.y + c2.y) / 2.0;
    return midpoint;
}

void print(Coordinate<double, double> c)
{
    cout << "(" << c.x << ", " << c.y << ")";
}