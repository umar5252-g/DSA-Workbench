#include <iostream>
using namespace std;
#include <queue>

// class Node
// {
// public:
//   int data;
//   Node *next;

//   Node(int val)
//   {
//     data = val;
//     next = NULL;
//   }
// };

// class queue
// {
//   Node *head;
//   Node *tail;

// public:
//   queue()
//   {
//     head = tail = NULL;
//   }

//   void push(int val)
//   {
//     Node *newNode = new Node(val);

//     if (empty())
//     {
//       head = tail = newNode;

//       return;
//     }
//     tail->next = newNode;
//     tail = newNode;
//   }
//   void pop()
//   {
//     if (empty())
//     {
//       cout << "LL is empty" << endl;
//     }

//     Node *newNode = head;
//     head = head->next;
//     delete newNode;
//   }

//   int front()
//   {
//     if (empty())
//     {
//       cout << "LL is empty" << endl;
//     }
//     return head->data;
//   }
//   bool empty()
//   {
//     if (head == NULL)
//     {
//       return true;
//     }
//     else
//       return false;
//   }
// };

int main()
{
  // queue<int> q;
  // q.push(1);
  // q.push(2);
  // q.push(3);
  // q.push(4);
  // while (!q.empty())
  // {
  //   cout << q.front() << " ";
  //   q.pop();
  // }

  deque<int> dq; // deque means double ended queue. In this data structure we can do push back push front
                 // pop front and pop back
                 // also we didnt implement the deque data structure coz its already availale in stl library

  dq.push_back(1);
  dq.push_back(2);
  dq.push_back(3);
  dq.push_front(4);
  dq.pop_front();
  dq.pop_back();

  cout << "front: " << dq.front() << " back: " << dq.back();

  cout << endl;

  return 0;
}