#include <iostream>
using namespace std;
int main()
{
    int a = 25,b=2;
    int *ptr = &a;
    cout << "the value of a is " << a << endl;
    cout << "the value of a is " << *ptr << endl;

    cout << "the address of value a is " << ptr << endl;
    cout << "the address of value a is " << &a << endl;

    cout << "the address of value b is " << &b << endl;

    //ptr to pr
    int **ptr2 = &ptr; //ptr2 will point to ptr
    cout << "the value of a is " << **ptr2 << endl;
    cout << "the address of ptr is " << ptr2 << endl;

    return 0;
}