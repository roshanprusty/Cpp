#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << "by using function with 2 arguments is ";
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "by using function with 3 arguments is ";
    return a + b + c;
}
int main()
{
    cout << "the sum of 3 and 6 is " << sum(3, 6) << "" << endl;
    cout << "the sum of 3,6 and 2 is " << sum(3, 6, 2) << "" << endl;
//when the function name is same ----> we can see clearly that compiler used to figure out  that which input is for what function
    return 0;
}