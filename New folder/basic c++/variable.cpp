#include <iostream>

using namespace std;
int sum = 25; // global variable
void fck ()
{
    cout << sum;
}
int main()
{
    int sum = 6; // local variable ... : if variable name is same of LV and GB than local variable will be given as more presidence so it will print 6
    int a = 6;
    int b = 24;

    cout << " the value of a is " << a << "\n the value of b is " << b << "\n";

    cout << "the value of a is " << a << "\n";
    cout << "the value of b is " << b << "\n";

    cout << "hello world" << sum;
    fck();
    return 0;
}
