

#include <iostream>
using namespace std;
int readinfo()
{
    int n;
    cout << "pleade enter a number \n";
    cin >> n;
    return n;
}
int printinfo(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i = i + 2)
    {

        cout << i << endl;
        sum = sum + i;
    }
    cout << "sum of even numbers is " << sum << endl;
    return sum;
}
int whileloop()
{
    int n, i=0, sum=0;
    cin >> n;
    while (i <= n)
    {
        sum  +=i;
        i = i + 2;
    }
    cout << "sum of even numbers is " << sum << endl;
    return sum;
}
int main()
{
   int number= readinfo();
    printinfo(number);
    whileloop();
    return 0;
}


