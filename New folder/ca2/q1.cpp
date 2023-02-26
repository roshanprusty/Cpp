// Write a program in C++ to accept date in dd:mm:yyyy format. Store these values in MyDate Class
// with members as day, month and year. Convert this date into one variable “Duration” of the current
// years. This duration means number of days passed in the current year since Jan 1.
// Hint :Use type conversion method from class type to basic type conversions.
// Note: consider days in February as 28 for all years.
// Output expected:
// Enter Date : 05:04:2021
// No of days since Jan 1 of the current year : 90
#include <iostream>
using namespace std;
class mydateclass
{

public:
    int duration(int dd, int mm, int yyyy);
};

int mydateclass ::duration(int dd, int mm, int yyyy)
{
    int total_days = 0;

    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < mm - 1; i++)
    {

        total_days += arr[i];
    }

    return total_days + dd;
}
int main()
{
    int day, month, year;
    cout << "enter the day" << endl;
    cin >> day;

    cout << "enter the month" << endl;
    cin >> month;

    cout << "enter the year" << endl;
    cin >> year;

    if (!(day <= 31 && month <= 12))
    {

        cout << "invalid input";
        exit(0);
    }

    mydateclass mdc;
    cout << "No of days since Jan 1 of the current year :" << mdc.duration(day, month, year);

    return 0;
}
