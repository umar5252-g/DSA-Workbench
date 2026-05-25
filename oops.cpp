#include<iostream>
using namespace std;    

class Teacher {                          
private: 
double salary;

public: 
string dep;
string name;
int age;
string subject;

// Teacher(){
//   cout<<"this is a constructor\n";
// }
Teacher(string name, string dep, string subject, int age, double salary){
this->age = age;
this->name = name;
this->dep = dep;
this->subject = subject;
this->salary = salary;
}
Teacher (Teacher&Orobj){
  cout<<"I am a custom copy constuctor\n";
this->age = Orobj.age;
this->name = Orobj.name;
this->dep = Orobj.dep;
this->subject = Orobj.subject;
this->salary = Orobj.salary;
}

void changeDep(string dep){
  this->dep = dep;
}
void getInfo(){
  cout<<"name: "<<name<<endl;
  cout<<"dep: "<<dep<<endl;
  cout<<"subject: "<<subject<<endl;
  cout<<"salary: "<<salary<<endl;
}

};
int main (){
Teacher t1("umar khan", "computer science", "DSA", 23, 50000);
Teacher t2(t1);
t2.changeDep("software engineering");
t2.getInfo();
  
  return 0;
}