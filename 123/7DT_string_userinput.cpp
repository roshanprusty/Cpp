#include<iostream>
#include<string>
using namespace std;
int main()
{

// string myname;
// cout<<"enter your name\n";
// cin>>myname;  // if you will i/p roshan prusty then it will show only roshan instead of roshan prusty.
// // However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words).

string sclname,fname;

cout<<"enter your fullname \n";
cin>>fname;

cout<<"enter your school name\n";
getline(cin, sclname); //getline() is a standard library function that is used to read a string or a line from an input stream

cout<<"hello mr "<<fname<<"\n";
cout<<sclname;

return 0;
}