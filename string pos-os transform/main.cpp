#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool kerdes;
    string s;
    getline(cin,s);
    cout << "Nyomj egyest ha nagyitani szeretned a szoveget vagy nullat ha kicsinyiteni : ";
    cin >> kerdes;
    int cons='a'-'A';
    for(int i=0; i<s.size(); i++)
    {
        if(kerdes == 1)
        {
            if(s[i]>='A' && s[i]<'a')
            {
                s[i]=s[i];
            }
            if(s[i]>='a')
            {
                s[i]-=cons;
            }
        }
        if(kerdes == 0)
        {
            if(s[i]>='a')
            {
                s[i]=s[i];
            }
            if(s[i]<'a')
            {
                s[i]+=cons;
            }
        }
    }
    cout << s;
    return 0;
}
