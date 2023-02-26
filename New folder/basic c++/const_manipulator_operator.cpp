#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int a = 36; // by using const we cannot change the value of that variable if we do it automatic shows error
    cout << "the value of a is " << a;
    // a = 33; ---- it  will show error becoz a is const

    //manipulator in c++

    int k = 18, b = 21, c = 1821;
    cout << "the value of k with setw " << setw(4) << k << endl;
    cout << "the value of b with setw " << setw(4) << b << endl;
    cout << "the value of c with setw " << setw(4) << c << endl;

    cout << "the value of k without setw " << setw(4) << k << endl;
    cout << "the value of b without setw " << setw(4) << b << endl;
    cout << "the value of c without setw " << setw(4) << c << endl;
    return 0;
}