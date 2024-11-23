

#include <iostream>
#include <string>

using namespace std;
string printname()
{
    string name;
    cout << "enter your name\n";
    getline(cin, name);
cout << name;
return name;

}


int main()
{
    printname();
}

