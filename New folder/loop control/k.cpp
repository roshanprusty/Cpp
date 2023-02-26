#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the number" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "the given number is even";
    }
    else
    {
        cout << "the given number is odd";
    }
    return 0;
}