#include <iostream>
using namespace std;
int main()
{
    int arr[50], n;
    cout << "enter the lenght for the array:" << endl;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        cout << "enter the elements for the array[" << j+1 << "]" << endl;
        cin >> arr[j];
    }

    cout << "number entered by the user is :" << endl;
    for (int j = 0; j < n; j++)
        cout << arr[j] << "\t";
    cout << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (i % 2 == 0)
            {
                for (int j = 1; j < n; j = j + 2)
                {
                    if (arr[j] != 0)
                    {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
    }

    cout << "after shifting all the zero present in the array in the alternative order" << endl;
    for (int j = 0; j < n; j++)
        cout << arr[j] << "\t";
    return 0;
}