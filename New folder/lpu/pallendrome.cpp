#include <iostream>
using namespace std;

int main()
{

    int a;

    int reverse_number = 0;
    cout << "enter the number to check pallendrome or not\n";
    cin >> a;
    int temp = a;
    while (temp > 0)
    {
        int last_digit = temp % 10;
        reverse_number = (reverse_number * 10) + last_digit;
        temp /= 10;
    }
    if (reverse_number == a)
    {
        cout << "the given number is pallendrome" << endl;
    }
    else
    {
        cout << "the given number is not pallendrome" << endl;
    }

    return 0;
}