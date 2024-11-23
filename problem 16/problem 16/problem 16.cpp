
#include <iostream>
#include <cmath>
int main()
{

    using namespace std;

    short A, D; 

    cout << "Please enter A B" << endl;
    cin >> A >> D;

    cout << "Area =" << A * sqrt(pow(D, 2) - pow(A, 2)) << endl;
}

