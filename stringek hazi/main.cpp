#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    size_t a=s.find("a");
    while(a!=string::npos){
        s.replace(a,1,"mpm");
        a=s.find("a",a+1);
    }
    size_t e=s.find("e");
    while(e!=string::npos){
        s.replace(e,1,"mpm");
        e=s.find("e",e+1);
    }
    size_t i=s.find("i");
    while(i!=string::npos){
        s.replace(i,1,"mpm");
        i=s.find("i",i+1);
    }
    size_t o=s.find("o");
    while(o!=string::npos){
        s.replace(o,1,"mpm");
        o=s.find("o",o+1);
    }
    size_t u=s.find("u");
    while(u!=string::npos){
        s.replace(u,1,"mpm");
        u=s.find("u",u+1);
    }
    size_t p=s.find("p");
    while(p!=string::npos){
        s.insert(p+1,"Z");
        p=s.find("p",p+1);
    }
    cout << s;
    return 0;
}
