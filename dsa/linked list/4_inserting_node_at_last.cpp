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
  int no;
  cout << "enter the no of node you want to make\n ";
  cin >> no;

  cout << "enter the value of node 1\n";
  p = new node();
  cin >> p->value;
  start = p;

  for (int i = 2; i <= no; i++)
  {
    cout << "enter the value for node " << i << "\n";
    q = new node();
    cin >> q->value;
    p->next = q;
    q->next = NULL;
    p = q;
  }
  p = start;
  while (p != NULL)
  {
    cout << p->value;
    p = p->next;
  }

  cout << "\nenter the new value you want to add at last node\n";
  q= new node();
  cin >>q->value;
  q->next = NULL;


  p = start;
  while (p->next != NULL)
  {
    p = p->next;
  }


  p->next = q;
  p = start;
  while (p != NULL)
  {
    cout << p->value;
    p = p->next;
  }

  return 0;
}