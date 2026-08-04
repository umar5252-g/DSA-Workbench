#include<iostream>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

class circularList {
  public:
  Node*head;
  Node* tail;
circularList(){
  head = tail = NULL;
  }
}
int main (){ ;
  
  return 0;
}