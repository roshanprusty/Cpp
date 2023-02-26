#include <iostream>
using namespace std;

class integer
{
public:
int p;
    int count_integer(int countinteger);
};
int integer :: count_integer(int k)
{
    int count=0;
    while (k != 0)
    {
        k /= 10; 
        count++;
    }
    return count;
}

int main()
{
    int num;
    integer ir;
    cout << "enter the integer" << endl;
    cin >> num;

    cout << "the number of digits of given number is " << ir.count_integer(num);

    return 0;
}