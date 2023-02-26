#include <iostream>
using namespace std;
class example
{
    int data;

public:
    example() {}   //default constructor
    example(int x) //parameterized constructor
    {
        data = x;
    }
    example(example &dummy)
    {
        data = dummy.data;
        cout << "copy constructor called" << endl;
    }
    void display_data()
    {
        cout << "data = " << data << endl;
    }
};
int main()
{
    example obj1(35);
    example obj2(obj1); //copy constructor
    obj1.display_data();
    obj2.display_data();

    return 0;
}