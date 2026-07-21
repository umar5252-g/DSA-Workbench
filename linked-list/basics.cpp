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

  void insert(int val, int pos){
  
    if(pos<0){
      cout<<"invalid possition"<<endl;
    }
    if(pos==0){
      push_front(val);
    }
      Node*temp = head;
      Node* newNode = new Node(val);
    for(int i=0; i<pos-1; i++){
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

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
int main (){ 
  List ll ;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  ll.push_back(4);

  ll.pop_back();

  ll.print_all();
  
  return 0;
}