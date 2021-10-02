#include <iostream>

using namespace std;

int main()
{
    int v[100][100] , i , j ,n ,Sf=0 ,Sm=0;
    cout << "n=";
    cin >>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                cout <<"v[" << i << "][" <<j << "]=";
            cin >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
             if(i==j){
                Sf+=v[i][j];
             }
             if(i+j==n-1){
                Sm+=v[i][j];
             }
        }
    }
    cout << "Sf=" << Sf << endl;
    cout <<"Sm=" << Sm <<endl;

    return 0;
}
