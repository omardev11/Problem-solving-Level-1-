

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int printarea()
{
    short A, D;

    cout << "Please enter A B" << endl;
    cin >> A >> D;

    cout << "Area =" << A * sqrt(pow(D, 2) - pow(A, 2)) << endl;
    return A;
}
int main()
{
    printarea();
}


