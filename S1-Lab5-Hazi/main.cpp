#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("lkkt.out");
    int t[100][100],i, j,n;
    in>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            in>>t[i][j];
        }
    }
    int Sf=0,Sa=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j)
            {
                Sf+=t[i][j];
            }
            if(i>j)
            {
                Sa+=t[i][j];
            }
        }
    }
    int c;
    c=Sf*Sa;
    while(Sf!=Sa)
    {
        if(Sf>Sa)
        {
            Sf-=Sa;
        }
        else
        {
            Sa-=Sf;
        }
    }
    c=c/Sa;
    out << c;
    in.close();
    out.close();
    return 0;
}
