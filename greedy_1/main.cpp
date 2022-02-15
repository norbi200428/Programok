#include <iostream>

using namespace std;

void activitiselector(int start[], int finish[], int activity[], int n)
{
    cout << activity[0] << " ";
    int current = 0;
    for(int j = 1 ; j < n ; j++)
    {
        if(finish[current] <= start[j])
        {
            current = j;
            cout << activity[j] << " ";
        }
    }
}

int main()
{
    int activity[]= {1, 2, 3, 4, 5,6,7,8,9,10};
    int start[] = {15, 14,13,13,16,17, 18,17, 19, 20 };
    int finish[]= {16, 15,14,17,17,21,19, 18, 20, 21};
    int n = 10;
    for(int i = 0 ; i < n - 1; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(finish[i] > finish[j])
            {
                swap(finish[i], finish[j]);
                swap(activity[i],activity[j]);
                swap(start[i], start[j]);
            }
        }
    }
    activitiselector(start, finish, activity, n);
    return 0;
}
