#include <iostream>
using namespace std;
int main()
{
    int n, i, smallest, largest;
    int arr[n];

    cout << "enter the length of the array\n";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "enter the value for the arr[" << i << "]\n ";
        cin >> arr[i];
    }
    largest = smallest = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "the smallest number in given array is " << smallest << "\n";
    cout << "the largest number in given array is " << largest << "\n";

    return 0;
}