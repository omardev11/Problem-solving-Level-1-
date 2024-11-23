
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    short R; float PI = 3.14; float Area;

    cout << "enter R\n";
    cin >> R;

    Area = PI * pow(R, 2); 

    cout << "Area= " << ceil(Area) << endl;

}

