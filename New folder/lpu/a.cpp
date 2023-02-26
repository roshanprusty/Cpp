#include <iostream>
using namespace std;
class integer
{
public:
    int i;
    void set_integer(int p)
    {
        p=i;

    }

    
    int count_integer();
};

int integer ::count_integer()
{
   
    int temp=i;
    int ci = 0;
   
    
    while (temp != 0)
    {
        temp =temp/ 10;
        ci++;
    }
    return ci;
}

int main()
{
    int num;
    integer ir;
    cout << "enter the integer" << endl;
    cin >> num;
   ir.set_integer(num);
    cout << "the number of digits of given number is " << ir.count_integer();

    return 0;
}