
#include <iostream>

int main()
{
    using namespace std;

    int age; bool driverlicense;
    cout << "enter your age and driver license\n";
    cin >> age >> driverlicense;
    if (age > 21 && driverlicense == 1)
    {
        cout << "hired" << endl;
    }
    else {
        cout << "rejected" << endl;
    }
}

