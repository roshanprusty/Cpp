#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    cout<<add(5,5)<<endl;
    int (*funcptr)(int, int); // function pointer declaration
    funcptr = add;            // funcptr is pointing to the add function
    int sum = 5+funcptr(5, 5);
    std::cout << "value of sum is :" << sum << std::endl;
    return 0;
}
// In the above program, we declare the function pointer, i.e., int (*funcptr)(int,int) and then we store the address of add() function in funcptr. This implies that funcptr contains the address of add() function. Now, we can call the add() function by using funcptr. The statement funcptr(5,5) calls the add() function, and the result of add() function gets stored in sum variable.#include <iostream>  
