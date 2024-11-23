

#include <iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cout << "enter a number\n";
    cin >> N;
    while (N != -99)
    {
        sum += N;
        cin >> N;
    }
    cout << sum;
}


