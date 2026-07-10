#include<iostream>
using namespace std;    

// class Teacher {                          
// private: 
// double salary;

// public: 
// string dep;
// string name;
// int age;
// string subject;

// // Teacher(){
// //   cout<<"this is a constructor\n";
// // }
// Teacher(string name, string dep, string subject, int age, double salary){
// this->age = age;
// this->name = name;
// this->dep = dep;
// this->subject = subject;
// this->salary = salary;
// }
// Teacher (Teacher &Orobj){
//  cout<<"this is a custom copy constructor"<<endl;
//  this->name = Orobj.name;
//  this->dep = Orobj.dep;
//  this->subject = Orobj.subject;
//  this->age = Orobj.age;
//  this->salary = Orobj.salary;
// }

// void changeDep(string dep){
//   this->dep = dep;
// }
// void getInfo(){
//   cout<<"name: "<<name<<endl;
//   cout<<"dep: "<<dep<<endl;
//   cout<<"subject: "<<subject<<endl;
//   cout<<"salary: "<<salary<<endl;
// }

// };

class Student{
  public:
   string name;
  double cgpa ;


  Student(string name, double cgpa){
    this->name = name;
    this->cgpa = cgpa;
  }
  
  Student(Student &Orgobj){
    this->name = Orgobj.name;
    this->cgpa = Orgobj.cgpa;
  }
  
  void displayInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<cgpa<<endl;
  }
  

};
int main (){
  Student s1("kumar", 3.1);
  s1.displayInfo();

  return 0;
}