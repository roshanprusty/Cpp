#include <iostream>

using namespace std;

class B; //declaration of class B

class A
{
    int value;

public:
    A()
    {
        value = 5;
    }
    friend int sum(A , B ); // declaring friend function
};

class B
{
    int value=3;

// public:ṇ
//     B()
//     {
//         value = 3;
//     }
    friend int sum(A , B ); // declaring friend function
};

int sum(A v1, B v2) // friend function definition
{
    return (v1.value + v2.value);
}

int main()
{
    A a;
    B b;
    cout << "Sum : " << sum(a, b) << endl;
    return 0;
}