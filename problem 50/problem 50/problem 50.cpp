

#include <iostream>
using namespace std;

int main()
{
    int user;
    cout << "please enter your pin \n";
    cin >> user;
    int attempts = 1;
    while (user != 1234 && attempts<=3)
    {
        
     
            cout << "wrong pin \nplease enter a correct pin\n";
            cin >> user;
            attempts++;
       
    }
    if (attempts > 3)
    {
        cout << "card is blocked";
    }
    else
    {
        cout << "your balance is " << 7500 << endl;
    }
}


