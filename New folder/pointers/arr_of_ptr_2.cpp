#include <iostream>
using namespace std;
int main()
{
    int ptr[25];
    int *ptr2[25];
    

    for (int i = 0; i < 5; i++)
        cin >> ptr[i];

    for (int i = 0; i < 5; i++)
        ptr2[i] = &ptr[i];


    std::cout << "The values are" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << *ptr2[i] << std::endl;
    }

    return 0;
}

//**********************************

// in both way you can call data of array by using pointer..........HAVE A WATCH  ON BOTH OF THE PROGRAM
//GIVE 2ND PROGRAM FIRST PREFERENCE ------>IT CAN ACESSABLE QUICKLY

//**********************************

// #include <iostream>
// using namespace std;
// int main()
// {
//     int ptr[25];
//     int *ptr3;

//     for (int i = 0; i < 5; i++)
//         cin >> ptr[i];

//     ptr3 = ptr;

//     std::cout << "The values are" << std::endl;

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << ptr3[i] << std::endl;
//     }

//     return 0;
// }