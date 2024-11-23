

#include <iostream>
using namespace std;
int readnumbers()
{

    int n;
    cin >> n;
    return n;
}
int printnumbers(int n)
{int sum = 0;
    for (int i = 1; i <= n; i = i + 2)
    {
        cout << i << endl;
        sum += i;
    }
    cout << "sum of odd numbers is " << sum << endl;
    return sum;
}
int whileloop()
{
    int i = 1, n, sum = 0;
    cin >> n;
    while (i <= n)
    {
        sum += i;
        i = i + 2;
    }
    cout << "sum of odd numbers is " << sum << endl;
    return sum;
}
int main()
{
    int number = readnumbers();
    printnumbers(number);
    whileloop();
   
    
}

