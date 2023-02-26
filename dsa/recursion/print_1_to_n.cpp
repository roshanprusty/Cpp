#include <iostream>
using namespace std;
void fun(int n)
{
    if (n>1)
    {
        fun(n - 1);
    }
   
    cout << n << " ";
}
int main()
{
    int num = 4;
   fun(num);
    return 0;
}
