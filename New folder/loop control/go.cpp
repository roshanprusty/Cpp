
#include <iostream>
using namespace std;
int main()
{
        int n;
        cout << "enter number to check even or odd:\n";
        cin >> n;
        if (n % 2 == 0)
        {
                goto even;
        }
        else
        {
                cout << "given no is odd";
        }
even:
        cout << "given number is even";
        return 0;
}