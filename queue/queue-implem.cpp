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

    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    tail = tail->next;
    tail->next = NULL;
  }
  void pop()
  {
    if (head == NULL)
    {
      cout << "queue is empty" << endl;
    }

    Node *newNode = head;
    head = head->next;
    newNode = NULL;
  }
};

int main()
{
  ;

  return 0;
}