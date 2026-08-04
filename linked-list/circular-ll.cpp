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
  Node*head;
  Node* tail;

  public:

 circularList(){
  head = tail = NULL;
  }
  void insertAtHead(int val){
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    tail->next = head;
  }
  else{
    newNode->next = head;
    head = newNode;
    tail->next = head;
  }
 }

 
};


int main (){ ;
  
  return 0;
}