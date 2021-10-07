#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int v[100][100] , i ,j ,n, m ;
    bool prim[100][100];
    ifstream in("input.txt");
    ofstream out("output.txt");
    in >> n;
    in >> m;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
           in >> v[i][j];
        }
    }

    for(i=0 ; i<n ; i++){
        for(j=0 ;j<m ;j++){
            prim[i][j]=true;
        }
    }
    for(i=0 ; i<n ;i++){
        for(j=0 ; j<m ;j++){
          for(int oszto=2 ; oszto<v[i][j]/2+1 ; oszto++){
            if(v[i][j]%oszto==0){
                prim[i][j]=false;
            }
          }
        }
    }
    for(i=0 ;i<n; i++){
        for(j=0 ; j<m ;j++){
            if(prim[i][j]==true){
                out << "1" << " ";
            }
            else {
                out << "0" << " ";
            }
        }
        out << endl;
    }
    in.close();
    out.close();
    return 0;
}
