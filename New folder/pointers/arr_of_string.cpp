#include <iostream>
using namespace std;
int main()
{
    char names[4] = "ram";
    char *names[5] = {"john",
                      "Peter",
                      "Marco",
                      "Devin",
                      "Ronan"};
    cout << sizeof(names) << endl;
    cout << sizeof(*names) << endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << names[i] << std::endl;
    }
    return 0;
}
// In the above case, each element of the 'names' array is a string literal, and each string literal would hold the base address of the first character of a string. For example, names[0] contains the base address of "john", names[1] contains the base address of "Peter", and so on. It is not guaranteed that all the string literals will be stored in the contiguous memory location, but the characters of a string literal are stored in a contiguous memory location.