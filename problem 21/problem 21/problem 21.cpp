
#include <iostream>
#include <cmath>
using namespace std;

float circlearea(int l)
{
    float pi = 3.14; float area;
    area = (l * l) / (4 * pi);
    cout << "area of circlae is " << area << endl;
    return area;
}

int main()
{
    circlearea(20);
}


