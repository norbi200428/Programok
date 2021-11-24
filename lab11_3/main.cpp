#include <iostream>

using namespace std;
int tukorkep(int a)
{
    int tk=0,szj;
    while(a!=0)
    {
        szj=a%10;
        a=a/10;
        tk=tk*10+szj;
    }
    return tk;
}
int main()
{
    int szam;
    cout << "Add meg a szamot: ";
    cin >> szam;
    int z=tukorkep(szam);
    if(z==szam)
    {
        cout << "A szam pallindrom";
    }
    else
    {
        cout << "A szam nem pallindrom";
    }
    return 0;
}
