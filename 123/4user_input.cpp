#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number to check even or odd\n";
    cin >> num; //like this way you can take the input from the user
    if (num % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    return 0;
}