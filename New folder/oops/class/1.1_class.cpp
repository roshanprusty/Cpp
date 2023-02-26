// In C++, a structure is the same as a class except for a few differences. The most important of them is security. A Structure is not secure and cannot hide its implementation details from the end user while a class is secure and can hide its programming and designing details.
#include <iostream>
using namespace std;
class employee
{
    int k; //by default it will
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1); //***

    void printdata()
    {
        cout << "the value of a is : " << a << endl;
        cout << "the value of b is : " << b << endl;
        cout << "the value of c is : " << c << endl;
        cout << "the value of d is : " << d << endl;
        cout << "the value of e is : " << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1) //The scope resolution operator ( :: ) is used for several reasons. For example: If the global variable name is same as local variable name, the scope resolution operator will be used to call the global variable. It is also used to define a function outside the class and used to access the static variables of class.
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee emp;
    emp.setdata(18, 21, 2002);
    emp.d = 9;
    emp.e = 7;
    emp.printdata();
    // emp.k=5;--->it will throw error
    return 0;
}

// valid syntax

// class roshan{
//     class defination
// }aayushi,avneet,gima;