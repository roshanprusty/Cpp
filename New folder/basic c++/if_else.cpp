#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter your age \n";
    cin >> a;
    if (a > 18 && a < 55)
    {
        cout << "you are now eligible to drive";
    }
    else if (a >= 55)
    {
        cout << "sorry to say you are over age ";
    }
    else
    {
        cout << "sorry to say you are under age ";
    }
    return 0;
}