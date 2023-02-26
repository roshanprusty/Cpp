#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int f = 0, s = 0;

    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > f)

        {
            s = f;
            f = arr[i];
        }
        else if (arr[i]>s)
        {
            s=arr[i];
        }

    }
    cout<<"the second largest element of given number is "<<s<<""<<endl;
    return 0;
}