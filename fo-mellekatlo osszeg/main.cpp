#include <iostream>

using namespace std;

int main()
{
    int i , j , n ,S1=0 , S2=0;
    int v[100][100];
    cout << "n=";
    cin >> n;

          for(i=0 ; i < n ; i++){
        for(j=0 ; j<n ; j++){
            cout << "v[" << i << "]["<< j << "]=";
            cin >> v[i][j];

        }

    }
    for(i=0 ; i < n ; i++){
        for(j=0 ; j<n ; j++){
                if(i==j){
                    S1+=v[i][j];
                }
                if(i+j==n-1){
                    S2+=v[i][j];
                }
        }
    }
    cout << S1 << endl << S2;

    return 0;
}
