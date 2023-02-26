#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int f=0, s=0, t=0;
    for (int i = 0; i <= 7; i++)
    {
        if (arr[i] > f)
        {
            t = s;
            s = f;
            f = arr[i];
        }
        else if (arr[i] > s)
        {
            t = s;
            s = arr[i];
        }

        else if (arr[i] > t)
            t = arr[i];
    }
    cout << "\nThree largest elements are: " <<f<<", "<< s <<", "<< t;
    return 0;
}