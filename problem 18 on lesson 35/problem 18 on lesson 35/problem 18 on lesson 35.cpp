

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int printarea() {
    short R; float PI = 3.14; float Area;

    cout << "enter R\n";
    cin >> R;

    Area = PI * pow(R, 2);

    cout << "Area= " << ceil(Area) << endl;
    return Area;
}
int main()
{
    printarea();
}


