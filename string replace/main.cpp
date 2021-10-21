#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s="Jancsika";
    string str="Bela es Pista jatszik";
    str.replace(0,0,s);
    cout << str;
    return 0;
}
