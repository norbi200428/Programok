#include <iostream>

using namespace std;

bool prim(int a)
{
    for(int oszto=2; oszto<a/2+1; oszto++)
    {
        if(a%oszto==0)
        {
            return false;
        }
    }
    return true;
}
bool pallindrom(int a)
{
    int szj,ujszam=0,aux;
    aux=a;
    while(a!=0)
    {
        szj=a%10;
        a=a/10;
        ujszam=ujszam*10+szj;
    }
    if(ujszam==aux)
    {
        return true;
    }
    else
    {
        return false;

    }
}
int lnko(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}
void kerdes()
{
    cout << "Mit szeretnel csinalni?" << endl;
    cout << "1. Megvizsgalni, hogy egy szam prim-e"<<endl;
    cout << "2. Megvizsgalni, hogy egy szam pallindrom-e"<< endl;
    cout << "3. Megkeresni ket szam legnagyobb kozos osztojat"<<endl;
    cout << "0. Kilepni"<<endl;
}
int main()
{
    int szam;
    kerdes();
    cin>>szam;
    while(szam==0 || szam ==1 || szam==2 || szam==3 )
    {
        if(szam==1)
        {
            int a;
            cout << "Add meg a szamot";
            cin >>a;
            int z=prim(a);
            if(z==1)
            {
                cout << "A szam prim"<<endl;
            }
            else
            {
                cout <<"A szam nem prim "<<endl;
            }
            kerdes();
            cin >> szam;
        }

        if(szam==2)
        {
            int a ;
            cout << "Add meg a szamot";
            cin >> a;
            int z=pallindrom(a);
            if(z==1)
            {
                cout << "A szam pallindrom" << endl;
            }
            else
            {
                cout << "A szam nem pallindrom"<<endl;
            }
            kerdes();
            cin >> szam;
        }
        if(szam==3)
        {
            int a,b;
            cout << "Add meg az egyik szamot ";
            cin >> a;
            cout << "Add meg az masik szamot ";
            cin >> b;
            int z=lnko(a,b);
            cout << "lnko=" << z << endl;
            kerdes();
            cin >> szam;

        }
        if(szam==0)
        {
            break;
        }

    }
    return 0;
}
