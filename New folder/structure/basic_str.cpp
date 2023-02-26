#include <iostream>
using namespace std;
typedef struct emlpyee
{
    int id;
    float salary;
    char name[20];
    char specialization[30];

} emp;
int main()
{
    int n;
    emp e1;
    cout << "enter the employee name" << endl;
    gets(e1.name);
    cout << "enter the employee specialization" << endl;
    gets(e1.specialization);
    cout << "enter the employee id" << endl;
    cin >> e1.id;
    cout << "enter the employee salary" << endl;
    cin >> e1.salary;

    cout << "the name of employee is " << e1.name << "" << endl;
    cout << "the id of employee is " << e1.id << "" << endl;
    cout << "the specialization of employee  is " << e1.specialization << "" << endl;
    cout << "the salary of employee is " << e1.salary << "" << endl;

    return 0;
}
// union-- Unions are similar to structures but they provide better memory management then structures.  Unions use shared memory so only 1 variable can be used at a time. 

// We can only use 1 variable at a time otherwise the compiler will give us a garbage value
// The compiler chooses the data type which has maximum memory for the allocation.