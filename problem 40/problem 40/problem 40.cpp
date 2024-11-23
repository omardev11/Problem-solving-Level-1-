

#include <iostream>
#include <cmath>
int main()

{
    using namespace std;

    int totalbill, billvalue;

    cout << "enter billvalue\n";
    cin >> billvalue;

    totalbill = billvalue * 1.1;
    totalbill = totalbill * 1.16;
    cout << round (totalbill);

}

