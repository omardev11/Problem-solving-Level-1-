

#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    float days, h, m, seconds0, seconds1, seconds2, seconds3;

    cout << "Please enter days, hours and mnutes and seconds\n"; 
    cin >> days >> h >> m >> seconds0;

    seconds1 = days * 24 * 60 * 60;
    seconds2 =h* 60 * 60;
    seconds3 = m * 60;
       
    
    cout << "total of seconds is " << seconds1 + seconds2 + seconds3 + seconds0 << endl;
    cout << round(seconds1 + seconds2 + seconds3 + seconds0) << endl;



}


