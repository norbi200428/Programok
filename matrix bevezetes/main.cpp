#include <iostream>

using namespace std;

int main()
{
    int sor , oszlop , sorszam, oszlopszam,v[100][100];
    cout << "sorszam=";
    cin >> sorszam;
    cout << "oszlopszam=";
    cin >> oszlopszam;
    for(sor=0 ; sor < sorszam ; sor++){
        for(oszlop=0 ; oszlop<oszlopszam ; oszlop++){
            cout << "v[" << sor << "]["<< oszlop << "]=";
            cin >> v[sor][oszlop];

        }
    }
    for(sor=0 ; sor < sorszam ; sor++){
        for(oszlop=0 ; oszlop<oszlopszam ; oszlop++){
           if(v[sor][oszlop]%2==0){
            cout << v[sor][oszlop] << " ";
           }
        }
        cout << endl;

    }
    return 0;
}
