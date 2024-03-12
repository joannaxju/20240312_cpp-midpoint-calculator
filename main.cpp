#include "header.h"

int main() 
{
    Coordinate c1 = {1, 2};
    Coordinate c2 = {3, 6};
    Coordinate mid = midpoint(c1, c2);
    print(mid);
    
    return 0;
}