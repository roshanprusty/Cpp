#include <iostream>
using namespace std;
int main()
{
    int num;
    int arr[num];
    cout << "enter the total element you want to enter\n";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "enter the value for arr[" << i+1 << "]\n";
        cin >> arr[i];
    }
    for (int j = 0; j < num; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}