#include <iostream>

using namespace std;

int main()
{

    int v[100][100],n,m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    int us=n-1,uo=m-1;
    int s=0,o=0;
    while(s<=n && o<=m){
        for(int i=o ; i<=uo ;i++){
            cout << v[s][i] << " ";
        }
        s++;
        for(int i=s;i<=us;i++){
            cout << v[i][uo] << " ";
        }

        uo--;
        if(s<=us){
        for(int i=uo;i>=o;i--){
            cout << v[us][i] << " ";
        }
        }
        us--;
        if(o<=uo){
        for(int i=us;i>=s;i--){
            cout << v[i][o] << " ";

        }
        }
        o++;

    }


    return 0;
}
