#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    bool kerdes;
    string s ;
    getline(cin,s);
    cout << "Nyomj egyest ha nagyitani szeretned a szoveget vagy nullat ha kicsinyiteni : ";
    cin >> kerdes;
    if(kerdes == 1){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else if(kerdes == 0){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout << s;
    return 0;
}
