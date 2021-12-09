#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void nulla(int v[] , int n){
   for(int i=0;i<n;i++){
    v[i]=0;
    cout << v[i] << " ";
   }
   cout << endl;
}
void feltoltes(int v[],int n){
   for(int i=0;i<n;i++){
      v[i]=rand()%100+1;
      cout << v[i] << " " ;
   }
cout << endl;
}
void sorting(int v[] , int n){
   for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(v[i]>v[j]){
            swap(v[i],v[j]);
        }
     }
   }
}
void kiir(int v[] , int n){
   for(int i=0;i<n;i++){
      cout << v[i] << " ";
   }
}
int main()
{
    int v[100];
    int n;
    cout << "add meg n-t ";
    cin >> n;
    nulla(v,n);
    feltoltes(v,n);
    sorting(v,n);
    kiir(v,n);

    return 0;
}
