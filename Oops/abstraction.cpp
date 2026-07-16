#include<iostream>
using namespace std;

class shape{ // abstaction class
  virtual void draw() = 0;
};

class circle: public shape{
  public:
  void draw(){
    cout<<"drawing a circle\n";
  }
};
int main (){ ;
  
  circle c1;
  c1.draw();
  return 0;
}