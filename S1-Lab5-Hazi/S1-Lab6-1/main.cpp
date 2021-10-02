#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    bool prim;
    int v[100][100],i,j,n,m;
    in>>n;
    in>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            in>>v[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
          prim=true;
            for(int oszto=2; oszto<v[i][j]/2+1; oszto++)
            {
                if(v[i][j]%oszto==0)
                {
                    prim=false;
                }

            }
            if(prim)
            {
                out << "1" << " ";
            }
            else
            {
                out << "0" <<" ";
            }
        }
        out <<endl;
    }

    in.close();
    out.close();

    return 0;
}
