#include <iostream>
using namespace std;
int main()
{
    string name;
    char let;
    int flag, i;
    cout << "enter the name\n";
    getline(cin, name);

    cout << "enter the letter you want to find\n";
    cin >> let;

    for (i = 0; i < name.size(); i++)
    {
        if (name[i] == let)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "\nyes, the given letter is present ";
        cout << "\nit is present in " << i << "th position of the name ";
    }

    else
    {
        cout << "\noops sorry, letter not found";
    }
    return 0;
}