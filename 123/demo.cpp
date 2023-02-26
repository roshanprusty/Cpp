#include<iostream>
using namespace std;
int main()
{
int a=24;    
int *p=&a;
cout<<p<<endl; // suppose if the p=2002 then p+1 will be 2006 bcz it is pointing to the integer as we know integer carry 4 bytes therefore increment will be +4
cout<<p+1;
return 0;
}