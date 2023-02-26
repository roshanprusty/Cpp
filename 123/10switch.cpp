#include<iostream>
using namespace std;
int main()
{
int num1,num2;
char sign;
cout<<"enter the first number\n";
cin>>num1;
cout<<"enter the second number\n";
cin>>num2;
cout<<"enter the operands\n";
cin>>sign;
switch(sign)
{
    case '+' :
    cout<<num1+num2;
    break;
    case '-' :
    cout<<num1-num2;
    break;
    case '*' :
    cout<<num1*num2;
    break;
    case '/' :
    cout<<num1/num2;
    break;
    default:          //The default keyword specifies some code to run if there is no case match
    cout<<"error";
}
return 0;
}