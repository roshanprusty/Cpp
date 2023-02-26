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
    int n, confirmation;
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

    cout << "\npress 1 if you want to delete the end node or press 2 if you don't\n";
    cin >> confirmation;

    if (confirmation == 1)
    {
        p = start;

        for (int i = 1; i < n - 1; i++) // (n-1) taken bcz so that p can go to upto n-1 node
        {
            p = p->next;
        }
        q = p->next;
        delete (q);
        p->next = NULL;
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
