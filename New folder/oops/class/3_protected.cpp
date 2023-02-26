#include <iostream>
using namespace std;
class parents
{
protected:
    int id_protected;
};
class child : parents
{
public:
    void setid(int id)
    {
        id_protected = id;
    }
    void displayid()
    {
        cout << "id_protected is : " << id_protected << endl;
    }
};
int main()
{
    child obj1;
    obj1.setid(81);
    obj1.displayid();

    return 0;
}