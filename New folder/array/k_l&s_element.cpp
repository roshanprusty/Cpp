#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    int arr[25];
    cout << "enter the total element"<<endl;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cout << "enter the  element for array[" << i << "] "<<endl;
        cin >> arr[i];
    }
    cout << "enter the number how many largest number you need"<<endl;
    cin >> k;
    sort(arr, arr+n);
    cout<<"the "<<k<<" largest number among given element is :"<<endl;
    for (int i=0; i < k; i++)
    {
        cout << arr[i]<<endl;
    }
// if  you want k smallest number than swap the number
    return 0;
}