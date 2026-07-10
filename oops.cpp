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
  double* cgpaptr ;


  Student(string name, double cgpa){
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
  }
  
  Student(Student &Orgobj){
    this->name = Orgobj.name;
    cgpaptr = new double;
    *cgpaptr = *Orgobj.cgpaptr;
  }
  
  void displayInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<*cgpaptr<<endl;
  }
  

};
int main (){
  Student s1("kumar", 3.1);
 
  Student s2(s1);
   s1.displayInfo();
   *(s2.cgpaptr) = 3.9;
  s1.displayInfo();

  return 0;
}