

#include <iostream>
#include <cmath>
int main()
{
    using namespace std;

    int a, b, c, p; float Area; const float PI = 3.14;

    cout << "Please enter a b c\n";
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    cout << "p = (a + b + c) / 2 =" << p << endl;
    Area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
    cout << "Area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2)= " << Area << endl;
    
    cout << round(Area);
    cout << &a;
    
    
}

