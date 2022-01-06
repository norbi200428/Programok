#include <iostream>

using namespace std;
int hatvany(int x,int n){
     if(n==1){return x;}
     return x*hatvany(x,n-1);
}
int main()
{
    int x,n;
    cin >> x >> n;
    cout << hatvany(x,n);
    return 0;
}
