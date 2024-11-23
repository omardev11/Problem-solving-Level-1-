
#include <iostream>
#include <cmath>
int main()
{
    using namespace std;

    int penny = 1, nickel = 5, dime = 10, quarter = 25, dollar = 100; float totalpennies, totaldollar;

    cout << "enter penny nickel dime quarter dollar\n";
    cin >> penny >> nickel >> dime >> quarter >> dollar;

    totalpennies = (penny * 1) + (nickel * 5) + (dime * 10) + (quarter * 25) + (dollar * 100);
    totaldollar = totalpennies / 100;

    cout << totalpennies << endl;
    cout << totaldollar << endl;
    cout << round(totalpennies) << " " << round(totaldollar) << endl;

}


