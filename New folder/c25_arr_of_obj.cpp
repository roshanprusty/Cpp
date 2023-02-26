#include <iostream>
using namespace std;
class student
{

public:
    char name[20];
};
int main()
{
    student s[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter the name of student whose roll no is : " << i + 1 << endl;
        cin >> s[i].name;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "the name of student of roll no " << i + 1 << " is " << s[i].name << "" << endl;
    }

    return 0;
}