
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int mark1, mark2, mark3, avarage;
    cout << "enter mark1 mark2 mark3\n";
    cin >> mark1 >> mark2 >> mark3;
    avarage = (mark1 + mark2 + mark3) / 3;
    if (avarage >= 50)
    {
        cout << "the avarage is " << avarage << " pass" << endl;
        
    }
    else {
        cout << "the avarage is " << avarage << " fail" << endl;
    }
}

