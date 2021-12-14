#include <iostream>

using namespace std;
bool prim(int a){
  for(int i=2;i<a/2+1;i++){
    if(a%i==0){
     return false;
    }
  }
     return true;
}
int main()
{
    int a;
    cout <<"Add meg a szamot";
    cin >> a;
    int p=0;
    while(p!=1){
        int z=a-1;
        int b=prim(z);
        if(b==1){
            cout << z;
            p=1;
        }
        a--;
    }
    return 0;
}
