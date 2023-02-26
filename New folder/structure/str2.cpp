#include <iostream>
using namespace std;

typedef struct student
{
    char name[50];
    int roll;
    float marks;
} s;

int main()
{
    int n;
    cout << "enter the total no of students " << endl;
    cin >> n;
    cout << "Enter information of students: " << endl;
    s sr[n];

    for (int i = 0; i < n; ++i)
    {
        sr[i].roll = i + 1;
        cout << "For roll number" << sr[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> sr[i].name;

        cout << "Enter marks: ";
        cin >> sr[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for (int i = 0; i < n; ++i)
    {
        cout << "\nRoll number: " << i + 1 << endl;
        cout << "Name: " << sr[i].name << endl;
        cout << "Marks: " << sr[i].marks << endl;
    }

    return 0;
}