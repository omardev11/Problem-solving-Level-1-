

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float printarea(int a)
{
    float  area; float pi = 3.14;
    
    area = pi * pow(a, 2) / 4;
    cout << "area is " << area << endl;
    return area;
}
int main()
{
    printarea(15);
}

