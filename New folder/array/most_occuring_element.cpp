#include <iostream>
using namespace std;
int main()
{
    int arr[25];
    int occ = 0, n, k = 0;
    cout << "enter the total element" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the  element for array[" << i << "] " << endl;
        cin >> arr[i];
    }
    cout << "the repeating element are :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                cout << arr[j] << endl;
            }
           
        }
    }
    // cout<<"total "<<occ<<" times repeated";

    return 0;
}