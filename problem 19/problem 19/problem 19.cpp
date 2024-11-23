

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int printarea()
{
    int d, area; float pi = 3.14;
    cout << "enter d \n";
        cin >> d;
        area = (pi * (d * d));
        cout << "Area is " << area;
        return area;
}


int main()
{
    printarea();
}


