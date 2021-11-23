#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
int tomb(int arr[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;
}
int selectSort(int arr[],int n)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {

                swap(arr[i],arr[j]);
            }
        }
    }

}

int main()
{
    srand(time(0));
    int arr[100],n ;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        arr[i]=rand()%100;
    }
    tomb(arr,n);
    selectSort(arr, n);
    tomb(arr, n);


    return 0;
}
