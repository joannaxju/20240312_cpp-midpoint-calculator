#include "header.h"

int main() 
{
    cout << "Midpoint Calculator\n\n";
    Coordinate<double, double> c1, c2, mid;
    collect(c1, c2);
    mid = midpoint(c1, c2);
    print(mid);
    
    return 0;
}