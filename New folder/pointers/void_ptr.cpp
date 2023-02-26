#include <iostream>
using namespace std;
int main()
{
    // The void pointer in C++ is a pointer which is not associated with any data types. It points to some data location in the storage means points to the address of variables.

    // we use void pointer becoz ---> to get the address of any float,double,char and etc with int you can't do it in c++ as shown in 2nd prgm it will show error

    void *ptr; //you cannot print value by calling *ptr
    float *ptr1;

    float b = 6.3;
    int a = 9;
    ptr = &b;

    ptr1 = (float *)ptr; ///without typecasting you cannnot acess the value of void pointer ...in c only you can acess the value
    cout << a << endl
         << ptr << endl
         << *ptr1;

    

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *ptr,*ptr1;
//     char a[2] = "a";
//     *ptr1 = &a; //error
//     float f = 10.3;
//     ptr = &f; // error
//     std::cout << "The value of *ptr is : " << *ptr << std::endl;
//     return 0;
// }