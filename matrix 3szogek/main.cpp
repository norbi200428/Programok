#include <iostream>

using namespace std;

int main()
{
    int i , j , n , Pe=1 , Pn=1 , Pd=1 , Pk=1;
    int v[100][100];
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
            if(i<n && i+j <n-1){
                Pe*=v[i][j];
            }
            if(i<n && i+j > n-1 ){
                Pn*=v[i][j];
            }
            if(i>n && i+j > n-1 ){
                Pd*=v[i][j];
            }
            if(i > n && i+j < n-1){
                Pk*=v[i][j];
            }
        }
    }
    cout << Pe << " "<< Pn << " " << Pd  << " "<< Pk ;
    return 0;
}
