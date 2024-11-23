

#include <iostream>
#include <string>
 
using namespace std;
int printarea()
{
    int a, b, area;
    cout << "enter a and b\n";
    cin >> a >> b;
    area = a * b;
    cout << "area is " << area;
    return area;
}
int main()
{
    printarea();
}


