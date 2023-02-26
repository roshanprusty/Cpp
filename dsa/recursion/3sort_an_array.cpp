#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 9, 8, 6};
    int small = 0;
    for (int i = 0; i <=3; i++)
    {
        small = arr[i];
        for (int j = i + 1; j <=3; j++)
        {
            if (arr[j] < small)
            {
                small = arr[j];
            }
        }
        arr[i] = small;
    }
    for (int i = 0; i <=3; i++)
    {
        cout << arr[i];
    }

    return 0;
}