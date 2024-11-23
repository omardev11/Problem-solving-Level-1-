

#include <iostream>
#include <cmath>
using namespace std;

float circlearea(int a, int b)
{
    float pi = 3.14; float area;
    area = pi * ((pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));
    cout << "area of circle is " << area << endl;
    return area;
}
int main()
{
    circlearea(200, 10);
}

