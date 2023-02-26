#include <iostream>
using namespace std;

class Area
{
public:
    int length;
    int breadth;
    void setDim(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    float len, bre;
    int ar;
    Area a;
    cout << "enter the length of the rectangle" << endl;
    cin >> len;
    cout << "enter the breadth of the rectangle" << endl;
    cin >> bre;
    cout << "the area of the rectangle is : "<<endl;
    a.setDim(len, bre);
    cout << a.getArea() << endl;
    return 0;
}