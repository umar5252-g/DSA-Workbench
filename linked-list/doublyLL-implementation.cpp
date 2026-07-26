#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node * next;
  Node* prev;

  Node(int val){
    data = val;
    next = prev = NULL;
  }
};

class DoublyList{
  Node * head;
  Node* tail;

  public: 
  DoublyList(){
    head = tail = NULL;
  }

  void push_front(int val){
    Node * newNode = new Node(val);

    if(head == NULL) head = tail = newNode;
    else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  }

  void print_all(){
    Node* tempNode = head;
    cout<<"NULL <=> ";
    while(tempNode != NULL){
      cout<<tempNode->data<<" <=> ";
      tempNode = tempNode->next;
    }
    cout<<"NULL"<<endl;


  }
};

int main (){ ;
  DoublyList ll ;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_front(4);

  ll.print_all();

  return 0;
}