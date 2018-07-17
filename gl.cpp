#include <iostream>
#include <string>
using namespace std;

int main()
{
string str;

cout<<"enter:"<<endl;
getline(cin,str);
cout<<"getline(cin,str) get"<<str<<" length: "<<str.length()<<endl;


//cout<<"enter for cin: "<<endl;
cin>>str;
cout<<"cin get: "<<str<<" length= "<<str.length()<<endl;


//cout<<"enter something for getline: "<<endl;
//getline(cin,str);
//cout<<"getline(cin,str) get"<<str<<" length: "<<str.length()<<endl;

}


