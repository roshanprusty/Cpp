
#include <iostream>

using namespace std;

class ABC
{
public:
    static int x;

    void showdata();
    void changedata(int);
};

int ABC ::x = 10;

void ABC ::changedata(int y)
{
    x = y;
}

void ABC ::showdata()
{
    cout << "Value of x is : " << x << endl;
}

int main()
{
    cout << "value of x is : " << ABC::x << endl;
    return 0;
