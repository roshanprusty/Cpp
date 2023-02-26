#include <iostream>
using namespace std;
int main()
{
    int a[25];
    for (int i = 0; i <= 5; i++)
    {
        cout << "enter the mark of roll no " << i + 1 << "" << endl;
        cin >> a[i];
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << "the mark of roll no " << i + 1 << " is " << a[i] << "" << endl;
    }
    return 0;
}