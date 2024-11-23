

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int printnumber(int &num1,int &num2)
{
    int tempt;
   
    tempt = num1;
    num1 = num2;
    num2 = tempt;
    cout << "after swap is " << "num1=" << num1 << " num2= " << num2 << endl;

    return num2;
}

int main()
{
    int num1, num2, result;
    cout << "enter num1 num2 " << endl;
    cin >> num1 >> num2;
    cout << "before swap is " "num1= " << num1 << " num2= " << num2 << endl;
    printnumber(num1, num2);
    cout << "after swaped numbers is " << "num1= "<<num1<<" num2= "<< num2 << endl;
}


