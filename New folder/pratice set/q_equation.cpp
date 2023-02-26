#include <iostream>
#include <cmath>
// The C++ <cmath> header file declares a set of functions to perform mathematical operations such as: sqrt() to calculate the square root, log() to find natural logarithm of a number etc

using namespace std;
int x1(int a, int b, int c)
{
    return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
}

using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the three value" << endl;
    cin >> a >> b >> c;
    int q1 = x1(a, b, c);

    cout << q1 << endl;

    return 0;
}
