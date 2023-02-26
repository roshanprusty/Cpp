#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next; //self refrencing
};

int main()
{
    int num, i = 0;
    node *p, *q, *start, *newstart;
    cout << "enter the number of node \n";
    cin >> num;

    cout << "enter the value for node 1\n";
    p = new node();
    cin >> p->value;
    p->next = NULL;

    start = p;

    for (i = 2; i <= num; i++)
    {
        cout << "enter the value for node " << i << "\n";
        q = new node();
        cin >> q->value;
        q->next > NULL;
        p->next = q;
        p = q;
    }
    p = start;

    cout << endl;
    while (p != NULL)
    {
        cout << p->value << endl;
        p = p->next;
    }

    cout << "enter the new value you want to insert at node 1\n";
    q = new node();
    cin >> q->value;
    q->next = start;
    start = q;
    p = start;

    while (p != NULL)
    {
        cout << p->value;
        p = p->next;
    }

    return 0;
}
