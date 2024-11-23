

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int grade;
    cout << "please enter your grade " << endl;
    cin >> grade;
    
    if (grade >= 90)
    {
        cout << "A" << endl;
    }

    else if (grade >= 80)
    {
        cout << "B\n";
    }
    else if (grade >= 70)
    {
        cout << "C\n";
    }
    else if (grade >= 60)
    {
        cout << "D\n";
    }
    else if (grade >= 50)
    {
        cout << "E\n";
    }
    else {
        cout << "F\n";
    }


}
 

