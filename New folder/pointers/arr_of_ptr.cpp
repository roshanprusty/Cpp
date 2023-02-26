#include <iostream>
using namespace std;
int main()
{

    int marks[] = {2, 6, 9, 3, 5};
    int *ptr;

    ptr = marks; //both ptr and marks pointing to the same element
    cout << *marks << endl;
    cout << *ptr << endl;

    cout << marks[0] << endl;
    cout << ptr[0] << endl;

    cout << marks << endl;
    cout << ptr << endl;
    return 0;
}
// In the above code, we declare an integer pointer and an array of integer type. We assign the address of marks to the ptr by using the statement ptr=marks; it means that both the variables 'marks' and 'ptr' point to the same element, i.e., marks[0]. When we try to print the values of *ptr and *marks, then it comes out to be same. Hence, it is proved that the array name stores the address of the first element of an array