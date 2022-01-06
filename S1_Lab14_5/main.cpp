#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int src(int n,int v[],int k){
    if(n==k){
        return v[n];
    }
    return src(n-1,v,k);
}

int main()
{
    srand(time(0));
    int n,v[100],k;
    cout << "n = ";
    cin >> n;
    for(int i=1;i<n+1;i++){
        cout << "v["<<i<<"] = ";
        v[i]=rand()%100+1;
        cout << v[i] << endl;
    }

    cout << "k = ";
    cin >> k;

    cout << src(n,v,k);

    return 0;
}
