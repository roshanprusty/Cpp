#include <iostream>
using namespace std;
class constructor2
{
    public:
    constructor2();
};
class constructor
{
    int a, b;

public:
    constructor(){
    a = 18;
    b = 21;
   
    }


    void display_data()
    {
        cout << "the value of a is " << a << " and b is " << b << "";
    }
};
constructor2::constructor2()
{
 cout << "Default Constructor Invoked" << endl;
   
}
int main()
{
    constructor c1;
    constructor2 c2;
    c1.display_data();

    return 0;
}