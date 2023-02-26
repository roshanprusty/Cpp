#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter your age\n";
    cin >> a;
    a >= 18 ? cout << "you are eligible to vote " : cout << "srry to say you are under age";
    return 0;
}