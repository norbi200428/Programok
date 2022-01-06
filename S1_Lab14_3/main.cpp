#include <iostream>

using namespace std;
int lnko(int a,int b)
{
    if(a==b)
    {
        return a;
    }
    if(a>b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
int main()
{
    int a ,b;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << lnko(a,b);
    return 0;
}
