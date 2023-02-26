#include <iostream>
using namespace std;
int main()
{
    int a = 70; // variable initialization
    int &b = a;// arithmetic operation is not possible with reference variable, it throws an error.  
    int &c = a;
    // &c=b;It cannot be reassigned means that the reference variable cannot be modified.
    // it will show compile time error
    std::cout << "Value of a is :" << a << std::endl;
    std::cout << "Value of b is :" << b << std::endl;
    std::cout << "Value of c is :" << c << std::endl;
    return 0;
}
// In the above code, we create a variable 'a' which contains a value '70'. We have declared two reference variables, i.e., b and c, and both are referring to the same variable 'a'. Therefore, we can say that 'a' variable can be accessed by 'b' and 'c' variable.
