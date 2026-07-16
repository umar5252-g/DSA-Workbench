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

int main (){ ;
  Print p1;
  p1.print('a'); 
  return 0;
}