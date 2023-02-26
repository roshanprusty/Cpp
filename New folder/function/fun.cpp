#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void g ()
{
    cout<<"good morning";
}
int main()
{
    int n1, n2;
    cout << "enter the first number" << endl;
    cin >> n1;
    cout << "enter the second number" << endl;
    cin >> n2;
    cout << "the sum of both number is " << sum(n1, n2) << ""<<endl;
    g();
    return 0;
}