#include<iostream>
using namespace std;

class Person {
  public:
  string name;
  int age;

  Person(){
    cout<<"this is Person class constructor"<<endl;
  }
  ~Person(){
    cout<<"Person destructor\n";
  }
};

class Student: public Person {
    public: 
    int rollNo;
  
    Student(){
      cout<<"this is student class constructor"<<endl; // parent consstructor is called first
    }

    ~Student(){
      cout<<"Student Destructor\n"; // Child Destructor is called first
    }
    
};
int main (){ ;
  Student s1;
  s1.name = "Umar Khan";
  s1.age = 22;
  s1.rollNo = 231184;
  cout<< s1.name<<endl;
  cout<< s1.rollNo<<endl;
  return 0;
}