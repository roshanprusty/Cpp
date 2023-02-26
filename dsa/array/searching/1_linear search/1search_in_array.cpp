#include <iostream>
using namespace std;

int main()
{
    int n, search, flag, i = 0;
    int arr[n];

    cout << "enter the length of the array\n";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "enter the value for the arr[" << i << "]\n ";
        cin >>
            arr[i];
    }

    cout << "enter the value you want to search in the array\n";
    cin >> search;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "\nyes, the given element is present ";
        cout << "\nit is present in " << i << "th position of the array ";
    }

    else
    {
        cout << "\noops sorry, element not found";
    }

    return 0;
}