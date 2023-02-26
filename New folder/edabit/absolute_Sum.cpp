#include <iostream>
using namespace std;
void abs_sum(int n, int arr[10], int sum)
{
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "the sum of given number is " << sum << "" << endl;
}
int main()
{
    int n;
    int arr[n];
    int sum = 0;
    cout << "enter the total number"<<endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " value" << endl;
        cin >> arr[i];
    }
    abs_sum(n, arr, sum);
    return 0;
}