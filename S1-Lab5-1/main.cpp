#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(0));
    int v[100][100], i, j,n;
    cout << "n=";
    cin >> n;
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            v[i][j]=rand()%100+1;
        }
    }
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            if(i==j)
            {
                v[i][j]=0;
            }
            if(i>j)
            {
                v[i][j]=-v[i][j];
            }
        }
    }
    for(i=0 ; i<n ; i++ )
    {
        for(j=0 ; j<n ; j++)
        {
            cout << v[i][j] <<" " ;
        }
        cout << endl;
    }



    return 0;
}
