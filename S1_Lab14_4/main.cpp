#include <iostream>

using namespace std;
int function ( int n){
     if(n<10){
        return n;
     }
     int x=n;
     int h=1;
     while(x>10){
        x/=10;
        h*=10;
     }
     return n%10*h+function(n/10);
}
int main()
{
    int a;
    cin >> a;
    if(a==function(a)){
        cout << "a szam pallindrom ";
    } else {
        cout << "a szam nem pallindrom";
    }
    return 0;
}
