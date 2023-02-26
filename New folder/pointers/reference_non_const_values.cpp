// c++ provides two types of references:
//1. References to non-const values
// 2.References as aliases

#include <iostream>
using namespace std;
int main()
{
    int a = 25;
    // Reference can be created by simply using an ampersand (&) operator. When we create a variable, then it occupies some memory location. We can create a reference of the variable; therefore, we can access the original variable by using either name of the variable or reference.
    int &value = a;
    cout << value;
    return 0;
}
