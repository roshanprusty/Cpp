#include <iostream>
using namespace std;
int main()
{
    void *ptr;           // void pointer declaration
    int *ptr1;           // integer pointer declaration
    int data = 10.369; // integer variable initialization
    ptr = &data;         // storing the address of data variable in void pointer variable
    ptr1 = (int *)ptr; // assigning void pointer to integer pointer
    //without typecasting in c++ you cannot sent the address of data which is stored in ptr to ptr1
    std::cout << "The value of *ptr1 is : " << *ptr1 << std::endl;
    return 0;
}

// In C, we can assign the void pointer to any other pointer type without any typecasting, whereas in C++, we need to typecast when we assign the void pointer type to any other pointer type.

// #include <stdio.h>  
// int main()  
// {  
//    void *ptr; // void pointer declaration  
//    int *ptr1;  // integer pointer declaration  
//    int a =90;  // integer variable initialization  
//    ptr=&a; // storing the address of 'a' in ptr  
//    ptr1=ptr; // assigning void pointer to integer pointer type.  
//    printf("The value of *ptr1 : %d",*ptr1);  
//    return 0;  
// }  