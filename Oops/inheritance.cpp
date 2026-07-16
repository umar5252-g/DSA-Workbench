#include<iostream>
using namespace std;

class Person {
  public:
  string name;
  int age;
};

class Student: public Person {
    public: 
    int rollNo;

    
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