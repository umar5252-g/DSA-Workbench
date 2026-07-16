#include<iostream>
using namespace std;

class Person {
  public:
  string name;
  int age;

  Person(){
    cout<<"this is Person class constructor"<<endl;
  }
  // Person(string name , int age){
  //   this->name = name;
  //   this->age = age;
    
  // }

  // ~Person(){
  //   cout<<"Person destructor\n";
  // }
};

class Student: public Person {
    public: 
    int rollNo;
  
    // Student(){
    //   cout<<"this is student class constructor"<<endl; // parent consstructor is called first
    // }

    // Student(string name, int age,int rollNo):Person(name, age){
    //   this->rollNo = rollNo;
    //   cout<<"child constructor\n"<<endl;
    // }
    void displayInfo(){
      cout<<"name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
      cout<<"roll no: "<<rollNo<<endl;
    }

    // ~Student(){
    //   cout<<"Student Destructor\n"; // Child Destructor is called first
    // }
    
};

class Graduate : public Student{
  public:
    string ReasearchField;
  
};
int main (){ ;
  // Student s1("umar Khan", 21,231184);
  // s1.displayInfo();
    Graduate umar;
    umar.name = "umar Khan";
    umar.rollNo = 231153;
    umar.ReasearchField = "Computer Science";

  return 0;
}