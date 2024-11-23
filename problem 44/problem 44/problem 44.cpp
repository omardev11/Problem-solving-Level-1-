

#include <iostream>
#include <cmath>
using namespace std;
enum dayofweek{sat=1,sun,mon,tue,wed,thur,fri};
void showdayofweek()
{
    cout << "************************************************************************\n";
    cout << "WEEK DAY\n";
    cout << "*************************************************************************\n";
    cout << "saturday=1\n" << "sunday=2\n" << "monday=3\n" << "tueday=4\n" << "wednesday=5\n" << "thursday=6\n" << "friday=7\n";
    cout << "**********************************************************************************************************************" << endl;
}
dayofweek readdayofweek()
{
    int day;
    cout << "enter a number\n";
    cin >> day;
    return (dayofweek)day;
}
string getdayofweek(dayofweek day)
{
    
    switch (day)
    {
    case sat:
       return "sat";
        break;
    case sun:
        return "sun";
        break;
    case mon:
        return "mon";
        break;
    case tue:
        return "tue";
        break;
    case wed:
        return "wed";
        break;
    case thur:
        return  "thur";
        break;
    case fri:
        return "fri";
        break;
    default:
        cout << "not a week day\n";
        break;
    }
}

int main()
{
    showdayofweek();
    cout << "today is " << getdayofweek(readdayofweek());

}

