#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

#include "coordinate.h"

Coordinate<double, double> midpoint(Coordinate<double, double> c1, Coordinate<double, double> c2);

void print(Coordinate<double, double> c);

void collect(Coordinate<double, double>& c1, Coordinate<double, double>& c2);

#include "functions.cpp"

#endif