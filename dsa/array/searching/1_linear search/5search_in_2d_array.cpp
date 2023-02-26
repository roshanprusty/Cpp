// 2d array = https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/

#include <iostream>
using namespace std;
int main()
{
    int i, j, target, flag;
    int arr[2][3] = {3, 2, 1, 6, 5, 4};

    cout << "enter the value you want to search in 2d array\n";
    cin >> target;

    for ( i = 0; i <2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (target == arr[i][j])
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        cout << "\nyes, the given element is present ";
        cout << "\nit is present in arr["<<i<<"]["<<j<<"]th position of the array ";
    }

    else
    {
        cout << "\noops sorry, element not found";
    }

    return 0;
}