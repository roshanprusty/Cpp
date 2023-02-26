#include <iostream>
using namespace std;
int main()
{
    const int num = 24; // this will declare the variable as "constant", which means unchangeable and read-only):
    // num=77;  --> it will throw an error bcz num can't be changeable
    cout<<num;
    return 0;
}