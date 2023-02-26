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
        int n, i = 1;
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

        return 0;
    }