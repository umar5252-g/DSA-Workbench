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

class List {
  private: 
  Node* head ;
  Node* tail ;

  public:
  List(){
    head = tail = NULL;
  }
  void push_front(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
      head = tail = newNode;
    }
    else{
      newNode->next=head;
      head = newNode;
    }
  }

  void push_back(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
      head = tail = newNode;
    }
    else{
     tail->next = newNode;
     tail = newNode;
    }
  }

  void pop_front(){
    if(head == NULL){
      cout<<"LL is empty\n";
      return;
    }
    Node* temp = head;
    head = head->next;
    temp->next = NULL;

    delete temp;
  }

  void pop_back(){
    if(head == NULL){
      cout<<"LL is empty\n";
      return;
    }
    Node* temp = head;
    while(temp->next != tail){
      temp = temp->next;
    }
    temp->next = NULL;
    delete temp;
    tail = temp;
   
    
  }
  void print_all(){
    Node* temp = head;
    while(temp !=  NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
  }

};

bool detectCycleInLL(Node* head){
    
   Node *slow = head;
  Node* fast = head;

  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast) return true;
    
  }
  return false;
}

int main (){ 
  
  return 0;
}