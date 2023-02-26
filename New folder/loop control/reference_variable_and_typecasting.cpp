#include <iostream>
using namespace std;
int a = 5;
int main()
{
    int a;
    int b;
    float c = 36.2f;       // if you don't write 'f' by default it take double
    long double d = 36.2l; // if you don't write 'l' by default it take double

    cout << "enter the value of a\n ";
    cin >> a;
    cout << "enter the value of b \n";
    cin >> b;
    cout << "the sum of a and b is " << a + b << "\n";
    cout << "the global variable is " << ::a << endl; // :: --- scope resolution operator in which we use to call global variable

    cout << "the value of c is " << c << endl;
    cout << "the value of d is " << d << endl;

    cout << "the size of 36.2 is " << sizeof(36.2) << "\n";
    cout << "the size of 36.2f is " << sizeof(36.2f) << endl;
    cout << "the size of 36.2F is " << sizeof(36.2F) << endl;
    cout << "the size of 36.2l is " << sizeof(36.2l) << endl;
    cout << "the size of 36.2L is " << sizeof(36.2L);

    cout<<endl<<"after typecasting the value of a is  "<<(int)c;
    return 0;
}

// The sizeof(char) is : 1 bytes
// The sizeof(short) is : 2 bytes
// The sizeof(int) is : 4 bytes
// The sizeof(long) is : 8 bytes
// The sizeof(long long) is : 8 bytes
// The sizeof(float) is : 4 bytes
// The sizeof(double) is : 8 bytes
// The sizeof(long double) is : 16 bytes
// The sizeof(bool) is : 1 bytes