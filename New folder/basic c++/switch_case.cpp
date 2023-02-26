#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout << "enter the value of a \n";
    cin >> a;
    cout << "enter the value of b \n";
    cin >> b;
    cout << "enter the operation \n";
    cin >> c;

    switch (c)
    {
    case '+':
        cout << "the new value is " << endl<< a + b;
        break;
    case '-':
        cout << "the new value is " << endl<< a - b;
        break;
    case '*':
        cout << "the new value is " << endl<< a * b;
        break;
    case '/':
        cout << "the new value is " << endl<< a / b;
        break;
    default:
        cout << "invalid operation";
    }
}