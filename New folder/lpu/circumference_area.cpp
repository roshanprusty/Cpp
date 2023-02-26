#include <iostream>
using namespace std;
float area(int r, float k)
{
   k = 3.14 * r * r;
    return k;
}
float circumference(int r,float c)
{
     c = 2 * 3.14 * r;
    return c;
}

int main()
{
    int r;
    float b,c;
    cout << "enter the radius of circle" << endl;
    cin >> r;
    cout << "the area of circle is  " << area(r, b) << "" << endl;
    cout << "the circumference of circle is " << (r,c) << "" << endl;

    return 0;
}