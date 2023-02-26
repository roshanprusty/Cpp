#include <iostream>
#include <cmath>
using namespace std;

void fun(int num)
{
    int count;
    if (num < 1)
    {
        num * -1;
    }
    count = (int)(log10(num))+1;  //formula to find n no of digits :)
    // cout<<"the no of digits in given array is : "<<count<<"\n";
    cout<<count;
}
int main()
{
    int num;
    // cout << "enter the number to find the no of digits\n";
    cin >> num;

    fun(num);

    return 0;
}