#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the multiplication table which you want\n";
    cin >> a;
    cout << "------------------the multiplication table of given table is ------------------------\n";
    for (int i = 0; i <= 10; i++)
    {
        cout << "" << a << " *" << i << " = " << a * i << endl;
    }
    return 0;
}