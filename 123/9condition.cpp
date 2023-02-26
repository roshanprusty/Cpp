#include <iostream>
using namespace std;
int main()
{
    int salary;
    cout << "enter your salary\n";
    cin >> salary;
    if (salary >= 100000)
    {
        cout << "you will get bonus of 10000";
    }
    else if (salary >= 50000 && salary < 100000)
    {
        cout << "you will get bonus of 5000";
    }
    else
    {
        cout << "your salary is below 50000\n";
        cout << "you will get bonus of only 2000";
    }

    return 0;
}