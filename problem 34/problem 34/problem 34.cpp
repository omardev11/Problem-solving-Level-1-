

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float totalsales;
    cout << "enter your totalsales\n";
    cin >> totalsales;

    if (totalsales >= 1000000000)
    {
        cout << totalsales * 0.01;
    }
    else if (totalsales >= 500000)
    {
        cout << totalsales * 0.02;
    }
    else if (totalsales >= 100000)
    {
        cout << totalsales * 0.03;
    }
    else if (totalsales >= 50000)
    {
        cout << totalsales * 0.05;
    }
    else {
        cout << 0;
    }
}

