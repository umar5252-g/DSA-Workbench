#include<iostream>
using namespace std;

class Person {
  public:
  string name;
  int age;

  Person(){
    cout<<"this is Person class constructor"<<endl;
  }
  Person(string name , int age){
    this->name = name;
    this->age = age;
    
  }

  ~Person(){
    cout<<"Person destructor\n";
  }
};

class Student: protected Person {
    public: 
    int rollNo;
  
    Student(){
      cout<<"this is student class constructor"<<endl; // parent consstructor is called first
    }

    Student(string name, int age,int rollNo):Person(name, age){
      this->rollNo = rollNo;
      cout<<"child constructor\n"<<endl;
    }
    void displayInfo(){
      cout<<"name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
      cout<<"roll no: "<<rollNo<<endl;
    }

    ~Student(){
      cout<<"Student Destructor\n"; // Child Destructor is called first
    }
    
};
int main (){ ;
  Student s1("umar Khan", 21,231184);
  s1.displayInfo();
  return 0;
}