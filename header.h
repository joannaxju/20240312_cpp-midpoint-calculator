#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

#include "coordinate.h"

Coordinate<double, double> midpoint(Coordinate<int, int> c1, Coordinate<int, int> c2);

void print(Coordinate<double, double> c);

#include "functions.cpp"

#endif