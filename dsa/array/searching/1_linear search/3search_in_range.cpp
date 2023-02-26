#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 5, 6, -9, 77};
    int start, end, i, num, flag;

    cout << "enter the range from where to where you want to find\n";
    cout << "start : ";
    cin >> start;
    cout << "end : ";
    cin >> end;

    cout << "enter the number you want to search\n";
    cin >> num;
    for (i = start; i <= end; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "\nyes, the given element is present ";
        cout << "\nit is present in " << i << "th position of the array ";
    }

    else
    {
        cout << "\noops sorry, element not found";
    }
    return 0;
}