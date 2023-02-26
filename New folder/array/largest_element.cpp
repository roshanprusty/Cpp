#include<iostream>
using namespace std;
int main()
{
int a[] = {2,9,55,20,6,99};
int temp;
for(int i =0;i<=5;i++)
{
    if (a[0]<a[i])
    {
        a[0]=a[i];
        temp=a[0];
    }
}
cout<<"the largest element in array is "<<temp<<""<<endl;

return 0;
}