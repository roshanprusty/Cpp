#include <iostream>
using namespace std;
//C++ provides an inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.
inline int foo(int x, int y)
{
   
    int c=0;
    c=c+1;
    return x*y+c;
}
int koo(int x, int y)
{
    static int c=0;//this execute only once when it next time function is run, the value of c retained
    c=c+1;
    return x*y+c;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "the foo of a and b is " << foo(a, b) << "" << endl;
    cout << "the foo of a and b is " << foo(a, b) << "" << endl;
   
    cout << "the koo of a and b is " << koo(a, b) << "" << endl;
    cout << "the koo of a and b is " << koo(a, b) << "" << endl;
    return 0;
}