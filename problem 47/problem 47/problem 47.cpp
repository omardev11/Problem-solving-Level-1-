

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int loanamount, monthlypayment, T;// T is how month doyou need to paid

    cout << "enter montlypayment and loan amount\n";
    cin >> loanamount >> monthlypayment;

    T = loanamount / monthlypayment;
    cout << "the month do you need to paid is " << T << endl;

    
}


