#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout << "enter the value of num1\n"; // "<<"" is called insertion operator
    cin >> num1;
    cout << "enter the value of num2\n"; 
    cin >> num2;// ">>"" is called exerction operator
    // cout << "the sum of num1 and num2 is "<<num1+num2<<"";
    cout << "the sum of num1 and num2 is " << num1 + num2;
    return 0;
}
