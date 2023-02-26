#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int num1=8, num2=5;
    cout<<"before swap num1 = "<<num1<<" and num2 = "<<num2<<"\n";
    swap(num1,num2);
    cout<<"after swap num1 = "<<num1<<" and num2 = "<<num2<<"\n";

return 0;
}