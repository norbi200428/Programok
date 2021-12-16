#include <iostream>

using namespace std;
int recursive_function(int n){
    if(n == 1) return 1;
    return n*recursive_function(n-1);
}
int main()
{
    int szam;
    cout << "add meg a szamot ";
    cin >> szam;
    cout << recursive_function(szam);
    return 0;
}
