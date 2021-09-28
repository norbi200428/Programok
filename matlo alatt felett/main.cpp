#include <iostream>

using namespace std;

int main()
{
    int v[100][100] , n , i , j , Sf=0 , Sa=0;
    cout << "n=";
    cin >> n;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            if(i+j  < n-1){
                Sf+=v[i][j];
            }
            if(i+j > n-1){
                Sa+=v[i][j];
            }
        }
    }
    cout << "Sf=" << Sf << endl;
    cout << "Sa=" << Sa << endl;
    return 0;
}
