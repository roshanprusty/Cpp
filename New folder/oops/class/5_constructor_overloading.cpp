#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int l)
    {
        a = l;
        b = 0;
    }
    void printdata()
    {
        cout << "your number is " << a << " + " << b << "i " << endl;
    }
};
int main()
{
    complex c1(2, 5);
    c1.printdata();

    complex c2(3);
    c2.printdata();

    return 0;
}