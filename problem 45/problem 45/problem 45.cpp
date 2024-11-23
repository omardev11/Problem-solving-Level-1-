

#include <iostream>
#include <cmath>
using namespace std;
enum month{jan=1,feb,march,april,may,jun,jul,aug,sep,octo,nov,decem};
void showmonthmenu()
{
    cout << "************************************************************************\n";
    cout << "WEEK DAY\n";
    cout << "*************************************************************************\n";
    cout << "January=1\n" << "febuary=2\n" << "march=3\n" << "april=4\n" << "may=5\n" << "june=6\n" << "july=7\n" << "augustos=8\n" << "septemper=9\n" << "october=10\n" << "november=11\n" << "december=12" << endl;
    cout << "**********************************************************************************************************************" << endl;
}
month readmonth()
{
    int monthday; month mymonthdays;
    cout << "enter a number\n";
    cin >> monthday;
    
    return (month)monthday;
}
string getmonth(month mymonth)
{
    switch (mymonth)
    {
    case jan:
        return "jan";
        break;
    case feb:
        return "feb";
        break;
    case march:
        return  "marc";
        break;
    case april:
        return  "april";
        break;
    case may:
        return "may";
        break;
    case jun:
        return "jun";
        break;
    case jul:
        return"july";
        break;
    case aug:
        return "aug";
        break;
    case sep:
        return "sep";
        break;
    case octo:
        return "octo";
        break;
    case nov:
        return "nov";
        break;
    case decem:
        return "decem";
        break;
    default:
        cout <<  "wrong month" << endl;
        break;
    }
    
  
}
int main()
{
    
    showmonthmenu();
    cout << "month is " << getmonth(readmonth());
    
    return 0;

}

