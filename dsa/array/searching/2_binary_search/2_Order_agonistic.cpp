#include <iostream>
using namespace std;

int asc(int arr[], int target, int end)
{

    int start = 0;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            //ans
            return mid;
        }
    }
    return -1;
}
int dsc(int arr[], int target, int end)
{
    int start = 0;
    while (start <= end)
    {
    int mid = start + (end - start) / 2;
        if (target > arr[mid])
        {
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            start = mid + 1;
        }
        else
        {

            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {90, 75, 18, 12, 6, 4, 3, 1};
    int target = 3, ans;
    int end = sizeof(arr) / sizeof(arr[0]);

    if (arr[0] > arr[end])
    {
        ans = dsc(arr, target, end);
    }
    else if (arr[0] < arr[end])
    {
        ans = asc(arr, target, end);
    }

    cout<<ans;
    return 0;
}