#include "header.h"

Coordinate<double, double> midpoint(Coordinate<double, double> c1, Coordinate<double, double> c2)
{
    Coordinate<double, double> midpoint;
    midpoint.x = (c1.x + c2.x) / 2.0;
    midpoint.y = (c1.y + c2.y) / 2.0;
    return midpoint;
}

void print(Coordinate<double, double> c)
{
    cout << "The midpoint is (" << c.x << ", " << c.y << ").\n";
}

void collect(Coordinate<double, double>& c1, Coordinate<double, double>& c2)
{
    cout << "Enter the first coordinate (ex. 1 2 for (1,2)): ";
    cin >> c1.x >> c1.y;
    cout << "Enter the second coordinate (ex. 1 2 for (1,2)): ";
    cin >> c2.x >> c2.y;
    cout << endl;
}