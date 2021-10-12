#include <iostream>

using namespace std;

int main()
{
    int v[100][100],i,j,n,p,S=0;
    cout << "n=";
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            p=0;
            for(int oszto=2;oszto<v[i][j]/2+1;oszto++){
                if(v[i][j]%oszto==0){
                    p=1;
                }
            }
            if(p==0){
                S+=v[i][j];
            }
        }
    }
    cout << "S=" <<  S;
    return 0;
}
