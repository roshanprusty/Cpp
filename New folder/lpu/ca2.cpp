#include <iostream>
using namespace std;

int main()
{
    cout << "enter the number of elements in the array" << endl;
    int n;
    cin >> n;
    int *ptr = (int *)malloc(n * sizeof(int));
    int j = 0, c = 0;
    for (j = 0; j < n; j++)
    {
        cout << "enter the elements for the array[" << j << "]" << endl;
    cin >> ptr[j];
    }
    for (j = 0; j < n; j++)
    {
        if (ptr[j] == 0 && c % 2 == 0 && j < n - 1)
        {
            c++;
            int m = ptr[j];
            ptr[j] = ptr[j + 1];
            ptr[j + 1] = m;
            j++;
        }
    }
    for (j = 0; j < n; j++)
        cout << ptr[j]<<"\t";

    return 0;
}
