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
  int n, i = 1, node_no, new_value;
  node *p, *q, *start, *mid, *temp;

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

  cout << endl
       << "Enter the position at which you want to place node\n";
  cin >> node_no;

  cout << endl
       << "Enter the value of the node " << node_no << " which you want to inset \n";
  cin >> new_value;

  p = start;
  for (i = 1; i < node_no; i++)
  {
    p = p->next;
  }

  mid = p->next;
  q = new node();
  q->value = new_value;
  q->next = mid;
  p->next = q;

  p = start;
  cout << endl;
  while (p != NULL)
  {
    cout << p->value;
    p = p->next;
  }

  return 0;
}