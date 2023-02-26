#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
};

int main()
{
    node *p, *q, *start;
    int tnode, confirmation;

    cout << "enter the no of node you want to make\n";
    cin >> tnode;

    cout << "enter the value for node 1\n";
    p = new node();
    cin >> p->value;
    p->next = NULL;

    start = p;

    for (int i = 2; i <= tnode; i++)
    {
        cout << "enter the value for node " << i << "\n";
        q = new node();
        cin >> q->value;

        p->next = q;
        p = q;
    }
    p = start;
    while (p != NULL)
    {
        cout << p->value;
        p = p->next;
    }

    cout << "\npress 1 if you want to delete the first node or press 2 if you don't\n";
    cin >> confirmation;

        if (confirmation == 1)
    {
        p = start;
        q = p->next;

        delete (p);
        p = start = q;
        while (p != NULL)
        {
            cout << p->value;
            p = p->next;
        }
    }
    else
    {
        cout << "OK, thank you";
    }

    return 0;
}