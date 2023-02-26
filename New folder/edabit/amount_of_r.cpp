#include <iostream>
using namespace std;
int main()
{
    int n;
    char arr[20] = "bu";
    cout << "enter the amount of r you want to enter in burp"<<endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        arr[i + 2] = 'r';
    }
    arr[n + 2] = 'p';
    cout << arr;
    return 0;
}