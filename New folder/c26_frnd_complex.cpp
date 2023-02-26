#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //friend function prototype
    friend complex sumcomplex(complex o1, complex o2);
    // A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.
    void printdata()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setdata(2, 5);
    c1.printdata();

    c2.setdata(4, 7);
    c2.printdata();

    sum = sumcomplex(c1, c2);
    sum.printdata();

    return 0;
}