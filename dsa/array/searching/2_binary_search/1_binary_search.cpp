// 	1. Find the middle element
// 	2. Check:
// 		if target > middle => search in right
// 		else = search in left
// if target == middle => we found element

#include <iostream>
using namespace std;
int binary_search(int arr[], int target,int end)
{
    int start = 0;
    

    // return the index
    //return the -1 if it does not exist

    while (start <= end)
    {
        //int mid = (start + end ) / 2; ---> but here is the problem that (start + end ) exceeds the range of int in cpp in that case we can get error.
        int mid = start + (end - start) / 2; // if you not understand then take some assumption and calculate ..... you will get same answer it is just simple mathematics.

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
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    int target = 11;
    int end = sizeof(arr) / sizeof(arr[0]);

    int ans = binary_search(arr, target,end);
    cout<<ans;

    return 0;
}