#include <iostream>
using namespace std;
class demo1
{
    int data1, data2, *p;

public:
    demo1()
    {
        p = new int;
    }
    demo1(demo1 &d)
    {
        data1 = d.data1;
        data2 = d.data2;
        p = new int;
        *p = *(d.p);
    }
    void set_data(int a, int b, int c)
    {
        data1 = a;
        data2 = b;
        *p = c;
    }
    void display_data()
    {
        cout << "data1 = " << data1 << ", data2 = " << data2 << ", *p = " << *p << endl;
    }
};
int main()
{
    demo1 dm1;
    dm1.set_data(20, 3, 6);
    demo1 dm2(dm1);
    dm1.display_data();
    dm2.display_data();

    return 0;
}