#include <iostream>

using namespace std;

int divprim(int n)
{
    int oszto=2;
    int S=0;
    while(n>1)
    {
        int szamlalo=0;
        while(n%oszto==0)
        {
            n/=oszto;
            szamlalo++;
        }
        if(szamlalo%2>0)
        {
            S+=oszto;
        }
        oszto++;
    }
    return S;
}
int main()
{
    int s=divprim(360);
    cout << s;
    return 0;
}



