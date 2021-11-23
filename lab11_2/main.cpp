#include <iostream>

using namespace std;

int a=4;
int b=18;
int x=a*b;
int lnko(int a,int b){
    while(a!=b){
        if(a>b){
            a-=b;
        }
        else {
            b-=a;
        }
    }
    return a;
}
int lkkt(int a,int b){
    int lkkt=0;
     while(a!=b){
        if(a>b){
            a-=b;
        }
        else {
            b-=a;
        }
    }
    return x/a;
}
int main()
{
    cout << "lkkt=" << lkkt(a,b) << endl;
    cout << "lnko="<<lnko(a,b) << endl;
    return 0;
}
