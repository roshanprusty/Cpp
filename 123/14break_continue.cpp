#include<iostream>
using namespace std;
int main()
{
for(int i=0;i<=10;i++)
{
    if(i==4)
    {
        break;  //The break statement can also be used to jump out of a loop.
    }
    cout<<i<<endl;
}
cout<<"\n************************************\n";
for(int j=0;j<=10;j++)
{
    if(j==4)
    {
        continue;  //The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
    }
    cout<<j<<endl;
}

return 0;
}