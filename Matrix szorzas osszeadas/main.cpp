#include <iostream>

using namespace std;

int main()
{
    int v[100][100] , t[100][100] ,a[100][100],b[100][100], i,j,n;
    cout << "n=";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "t[" << i << "][" << j << "]=";
            cin >> t[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          a[i][j]=v[i][j]+t[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          b[i][j]=0;
          for(int k=0;k<n;k++){
            b[i][j]+=v[i][k]*t[k][j];
          }
        }
    }
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
