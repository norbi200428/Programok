#include <iostream>

using namespace std;

int main()
{
    int v[100][100] , i ,j , n;
    cout << "n=";
    cin >> n;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
            v[j][i]=v[i][j];
        }
    }
    for(i=0 ; i<n ; i++){
        v[i][i]=1;
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;


    }

    return 0;
}
