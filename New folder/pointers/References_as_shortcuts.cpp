#include <iostream>
using namespace std;
struct profile
{
    int id;
};
struct employee
{
    profile p;
};
int main()
{
    employee e;
    int &ref = e.p.id;
    ref = 34;
    std::cout << e.p.id << std::endl;
}
// In the above code, we are trying to access the 'id' of the profile struct of the employee. We generally access this member by using the statement e.p.id, but this would be a tedious task if we have multiple access to this member. To avoid this situation, we create a reference variable, i.e., ref, which is another name of 'e.p.id'.