#include<iostream>
using namespace std;

class Print {
  public: 
  void print(int x){
    cout<<"Int "<<x<<endl;
  }
  void print(char ch ){
    cout<<"char "<<ch<<endl;
  }
};

class Parent{
  public:
  void getInfo(){
    cout<<"this is Parent class\n";
  }
};
class child : public Parent{
  public:
  void getInfo(){
    cout<<"this is child class\n";
  }
};

int main (){ ;
  child c1;
  c1.getInfo();
  return 0;
}