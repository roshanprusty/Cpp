#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*funcptr)(int, int);
    funcptr = add;
    int sum = funcptr(5, 5);
    cout << sum;

    return 0;
}