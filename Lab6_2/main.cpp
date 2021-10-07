#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n ,m, i , j ,v[100][100];
    in >> n;
    in >> m;
    for(i=0 ; i<n ;i++){
        for(j=0 ; j<m ;j++){
            in >> v[i][j];
        }
    }
    int szj , ujszam=0 , x=0;
    for(i=0 ; i<n ;i++){
        for(j=0 ;j<m ;j++){
                x=v[i][j];
                ujszam=0;
                while(v[i][j]!=0){
                    szj=v[i][j]%10;
                    v[i][j]=v[i][j]/10;
                    ujszam=ujszam*10 +szj;

                }


            if(x==ujszam){
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
