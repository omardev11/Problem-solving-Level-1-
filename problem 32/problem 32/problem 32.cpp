

#include <iostream>
using namespace std;
long long int power()
{
    int n, m, p = 1, counter = 0;
    cin >> n >> m;
    if (m == 0)
    {
        cout << p << endl;
    }
    else {
        for (long long i = 0; i < m; ++i)
        {
            p = p * n;

        }
        cout << p << endl;

    }
    return 0;
}
int whileloop()
{
    int i=1, m, number, p=1;
    cout << "enter a number and m\n";
    cin >> number >> m;
    while (m == 0)
    {
        cout << p << endl;
    }
    while (i <= m)
    {
        p *= number;
        m--;
    }
    cout << "power of the number is " << p;
    return p;
}
int main()
{
    power();
    whileloop();
}

