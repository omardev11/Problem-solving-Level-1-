

#include <iostream>
using namespace std;
char AtoZ()
{
    char n;
    for (char i = 65; i <= 90; i++)
    {
        cout << i << endl;
    }
    
    return 0;
}
char atoz()
{
    for (char i = 97; i <= 122; ++i) {

        cout << "\t\t\t\t\t\t" << i << endl;
    }
    return 0;
}
int whileloop()
{
    char i=65;
    while (i <= 90)
    {
        cout << i << endl;
        i++;
    }
    return i;
}
int main()
{
    AtoZ(); atoz();
    whileloop();
       
    return 0;
}

