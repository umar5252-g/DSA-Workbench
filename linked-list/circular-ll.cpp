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
    head = tail = newNode;
    tail->next = head;
  }
  else{
    newNode->next = head;
    head = newNode;
    tail->next = head;
  }
 }

void insertAtTail (int val){
  Node* newNode = new Node (val);

  if(head== NULL) {
    head = tail = newNode;
    tail->next = head;
  }
  else{
    newNode->next = head;
    tail->next = newNode;
    tail = newNode;

  }
} 

void deleteAtHead(){
  if(head==NULL){
    return;
  }
 if(head == tail){
  delete head;
  head = tail = NULL;

 }
 else{  
  Node* temp = head;
  head= head->next;
  tail->next = head;

  temp->next = NULL;
  delete temp;
}

}

void deleteAtTail(){
  if(head==NULL)return;
  if(head==tail){
    delete head;
    head= tail = NULL;
  }
  else{
    Node* temp = tail;
    Node* newTail = head;
    while(newTail->next != tail){
      newTail = newTail->next;
    }
    newTail->next = head;
    temp->next = NULL;
    tail = newTail;
    delete temp;
  }
}
 void print_all(){
  if(head==NULL) return;
  cout<<head->data<<"->";
  Node* temp = head->next;
  while(temp!=head){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<temp->data<<endl;
 }


};


int main (){ ;
  circularList ll;
  ll.insertAtTail(1);
  ll.insertAtTail(2);
  ll.insertAtTail(3);
  ll.deleteAtTail();
  ll.deleteAtTail();
  ll.deleteAtTail();
  ll.print_all();
  return 0;
}