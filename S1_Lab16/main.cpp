#include <iostream>
#include <fstream>
using namespace std;

struct erdoseg{
    string nev;
    string szem;
    int magyar;
    int matek;
    int roman;
    int fizika;
    int kor;
}v[100];

int main()
{
    int n=0;
    ifstream fNev("nev.txt");
    ifstream fSzem("szemszin.txt");
    ifstream fMagyar("magyar.txt");
    ifstream fRoman("roman.txt");
    ifstream fMatek("matek.txt");
    ifstream fFizika("fizika.txt");
    ifstream fKor("kor.txt");

    while(getline(fNev,v[n].nev)){
        fSzem>>v[n].szem;
        fMagyar>>v[n].magyar;
        fRoman>>v[n].roman;
        fMatek >> v[n].matek;
        fFizika >> v[n].fizika;
        fKor>>v[n].kor;
        n++;
    }
    int t[100];
    for(int i=0;i<n;i++){
        t[i]=v[i].magyar+v[i].roman+v[i].matek+v[i].fizika;
    }
    int max = INT_MIN;
    int id=0;
    for(int i=0;i<n;i++){
        if(t[i]>max){
            max=t[i];
            id=i;
        }
    }
    cout << "1)" << endl;
    for(int i=0;i<n;i++){
        if(t[i]==max && v[i].szem=="barna"){
            cout << v[i].nev << " " << v[i].fizika <<  endl;
        }
    }
    cout << endl;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(v[i].kor<min){
            min = v[i].kor;
        }
    }
    cout << "2)" << endl;
    for(int i=0;i<n;i++){
        if(v[i].kor == min ){
            cout << v[i].nev << " " << v[i].szem << " " << v[i].magyar << endl;
        }
    }
    cout << endl;
    cout << "3)" << endl;
    for(int i=0;i<n;i++){
        if(v[i].magyar == 10){
            cout << v[i].kor << " " << v[i].szem << endl;
        }
    }

    return 0;
}
