

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2; char operationtype;
    cout << "enter num1 num2 and operation type \n";
    cin >> num1 >> num2 >> operationtype;
    if (operationtype ==  '+')
    {
        cout << num1 + num2;

    }
    else if (operationtype == '-')
    {
        cout << num1 - num2;

    }
    else if (operationtype == '*')
    {
        cout << num1 * num2;
    }
    else if (operationtype == '/')
    {
        cout << num1 / num2;
    }
}


