#include<iostream>
using namespace std;
int main()
{
int a=24;
int *p=&a;

cout<<*p<<endl; // *p --> it will print the value at that particular adress 
cout<<&a<<endl; //it will print the adress of a
cout<<p<<endl; //it will print the adress of a

cout<<"value of a before dereferencing is : "<<a<<endl;
*p=9; //Dereferencing is used to access or manipulate data contained in memory location pointed to by a pointer. In simple terms dereferencing is when we modify the data by using pointer.
cout<<"value of a after dereferencing is : "<<a<<endl;

return 0;
}