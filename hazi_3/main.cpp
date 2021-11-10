#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    size_t found=s.find('a');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("a",found+3);

    }
     found=s.find('e');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("e",found+3);
    }
    found=s.find('i');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("i",found+3);

    }
     found=s.find('o');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("o",found+3);

    }
     found=s.find('u');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("u",found+3);

    }
    found=s.find('A');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("A",found+3);

    }
     found=s.find('E');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("E",found+3);
    }
    found=s.find('I');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("I",found+3);

    }
     found=s.find('O');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("O",found+3);

    }
     found=s.find('U');
    while(found!=string::npos){
        s.replace(found,1,"mpm");
        found=s.find("U",found+3);

    }
    found=s.find('p');
    while(found!=string::npos){
        s.replace(found+1,0,"Z");
        found=s.find("p",found+1);
    }

    cout << s;
    return 0;
}
