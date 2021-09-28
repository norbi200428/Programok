#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int i , j , n , v[100][100] , Se=0 , Sd=0;
    in >>n;
    for(i=0 ; i<n; i++){
        for(j=0 ; j<n ; j++){
            cout <<"v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            if(i<j && i+j <n-1 ){
                Se+=v[i][j];

            }
            if(i>j && i+j > n-1){
                Sd+=v[i][j];
            }
        }
    }
    if(Se>Sd){
        cout << "Az eszaki  a nagyobb" << endl;
    } else {
    cout << "A deli a  nagyobb" << endl;

    }
    in.close();
    return 0;
}
