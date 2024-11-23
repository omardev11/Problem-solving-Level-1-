#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    long int numberofdays = 24 * 60 * 60, numberofhours = 60 * 60, numberofminutes = 60, remainder=0; int totalofseconds, numberofseconds;

    cout << "enter total of seconds" << endl;
    cin >> totalofseconds;

    numberofdays = floor(totalofseconds / numberofdays);
    remainder = totalofseconds % numberofdays;
    numberofhours = floor(remainder / numberofhours);
    remainder = remainder % numberofhours;
    numberofminutes = floor(remainder / numberofminutes);
    remainder = remainder % numberofminutes;
    numberofseconds = remainder;

    cout << "number of days is =" << numberofdays << endl;
    cout << "number of hours is =" << numberofhours << endl;
    cout << "number of minutes is =" << numberofminutes << endl;
    cout << "number of seconds is =" << numberofseconds << endl;
}

