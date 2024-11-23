

#include <iostream>
using namespace std;
int whileloop()
{
    int n, i=1, factorial = 1;
    cin >> n;
    while (n < 0)
    {
        cout << "must be a possotive number \n please enter a posotive number\n";
        cin >> n;
    }
    while (i <= n)
    {
        factorial = factorial * n;
        n--;
    }
    cout << "factorial of n is " << factorial << endl;
    return factorial;
}
int main()
{
    int n, factorial = 1;
    cin >> n;
    if (n > 0) {
        for (int i = n; i >= 1; i--)
        {
            cout << i << endl;
            factorial = factorial * i;
        }
        cout << "factorial of numbers is " << factorial << endl;

    }
    else {
        cout << "enter a possotive number" << endl;
    }

    whileloop();
}

