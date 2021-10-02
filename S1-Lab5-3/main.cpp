#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream in("in.txt");
   int v[100][100] , i, n , j ;
   cout << "n=";
   cin >>n;
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        in>>v[i][j];
    }
   }
   int Se=0 , Sk=0 , Sny=0 , Sd=0;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            if(i<j && i+j<n-1){
                Se+=v[i][j];
            }
            if(i<j && i+j>n-1){
                Sk+=v[i][j];
            }
            if(i>j && i+j>n-1){
                Sd+=v[i][j];
            }
            if(i>j && i+j<n-1){
                Sny+=v[i][j];
            }
    }
    }
    cout << "Se=" << Se << endl;
    cout << "Sny=" << Sny << endl;
    cout << "Sd=" << Sd << endl;
    cout << "Sk=" << Sk << endl;

    return 0;
}
