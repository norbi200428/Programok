#include <iostream>

using namespace std;
int osszeg(int v[],int n,int i){
    if(i==n-1){
        return v[i];
    }
    return v[i]+osszeg(v,n,i+1);
}
int main()
{
    int n,v[100];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << osszeg(v,n,0);
    return 0;
}
