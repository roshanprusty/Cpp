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
    int n, position, confirmation;
    node *p, *q, *start;

    cout << "enter the number of nodes you want to make\n";
    cin >> n;

    cout << "enter the value for node 1\n";
    p = new node();
    cin >> p->value;
    p->next = NULL;
    start = p;
    for (int i = 2; i <= n; i++)
    {
        cout << "enter the value for node " << i << " \n";
        q = new node();
        cin >> q->value;
        q->next = NULL;

        p->next = q;
        p = p->next;
    }

    p = start;

    while (p != NULL)
    {
        cout << p->value;
        p = p->next;
    }
    cout << "\npress 1 if you want to delete the mid node or press 2 if you don't\n";
    cin >> confirmation;

    if (confirmation == 1)
    {
        cout << "enter the position of node which you want ro delete\n";
        cin >> position;

        p = start;
        q = p->next;

        for (int i = 1; i < position - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        delete (q);

        p = start;
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