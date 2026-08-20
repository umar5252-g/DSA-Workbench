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

  void push(int val)
  {
    Node *newNode = new Node(val);

    if (empty())
    {
      head = tail = newNode;

      return;
    }
    tail->next = newNode;
    tail = newNode;
  }
  void pop()
  {
    if (empty())
    {
      cout << "LL is empty" << endl;
    }

    Node *newNode = head;
    head = head->next;
    delete newNode;
  }

  void front()
  {
    if (head == NULL)
    {
      cout << "queue is empty" << endl;
    }

    cout << head->data << endl;
  }
  bool empty()
  {
    if (head == NULL)
    {
      return true;
    }
    else
      return false;
  }
};

int main()
{
  ;

  return 0;
}