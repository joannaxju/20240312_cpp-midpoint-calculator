#include "header.h"

int main() 
{
    Coordinate<int, int> c1 = {1, 2};
    Coordinate<int, int> c2 = {6, 9};
    Coordinate<double, double> mid = midpoint(c1, c2);
    print(mid);
    
    return 0;
}