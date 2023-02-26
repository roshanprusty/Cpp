#include <iostream>
using namespace std;
class choice
{
    int a, b;

public:
    choice(int x, int y)
    {
        a = x;
        b = y;
        cout<<a<<endl;
        cout<<b;
    }
};
int main()
{
     // Parameterized Constructor
    choice c(5, 4);
    // c(3, 4);
    return 0;
}