#include <iostream>
using namespace std;
class node
{
public:
  int value;
  node *next; //self refrencing- it will store the address of next node
};

int main()
{
  int n, i = 1;
  node *p, *q, *start;

  //here we are asking how many nodes you want to make
  cout << "enter the number of nodes you want to make\n";
  cin >> n;

  cout << "enter the value for node 1\n";
  p = new node(); // p created space in heap memory for node 1
  cin >> p->value;
  p->next = NULL;
  start = p; //storing the address of p

  for (int i = 2; i <= n; i++)
  {
    cout << "enter the value for node " << i << " \n";
    q = new node(); // q created space in heap memory for node i
    cin >> q->value;
    q->next = NULL;

    //connecting the nodes
    p->next = q; //here we are giving the address of q in p->mext
    p = p->next; //now p is q
  }

  p = start;

  // printing  the linked list value
  while (p != NULL)
  {
    cout << p->value;
    p = p->next;
  }

  return 0;
}