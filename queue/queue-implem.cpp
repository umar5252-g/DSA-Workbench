#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

class queue
{
  Node *head;
  Node *tail;

public:
  queue()
  {
    head = tail = NULL;
  }
};
int main()
{
  ;

  return 0;
}