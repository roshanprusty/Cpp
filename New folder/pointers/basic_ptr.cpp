#include <iostream>
using namespace std;
int main()
{
    int a = 25;
    int *ptr = &a;
    // * --> astreisk sign
    // & -->ampersand sign
    cout << "the value of a is " << a << endl;
    cout << "the address of a variable is " << ptr << endl;
    cout << "the value of given address is" << *ptr << endl;

    return 0;
}