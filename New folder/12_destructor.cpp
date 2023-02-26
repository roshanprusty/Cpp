#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "hello....... i am constructor"<<endl;
    }
    ~demo()
    {
        cout << "hello ..... i am destructor";
    }
};
int main()
{
    demo obj1;

    return 0;
}