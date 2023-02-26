#include <iostream>
using namespace std;
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

int main()
{
    int a = 25;
    int b = 66;
    wrong_swap(a, b);
    cout << "the value of a and b after wrong swapping :" << endl
         << a << endl
         << b << endl;
    swap(&a, &b);
    cout << "the value of a and b after swapping :" << endl
         << a << endl
         << b << endl;

    return 0;
}