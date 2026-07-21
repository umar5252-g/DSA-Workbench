#include<iostream>
using namespace std;

// class A{
//    public:
//    int x ; 
//    void intX(){
//     x = x+1;
//    }
// };
// void fun(){
//   static int x = 0 ;
//   cout<<"x: "<<x<<endl;
//   x++;
// }

class ABC{
  public: 
  ABC(){
    cout<<"constructor\n";
  }

  ~ABC(){
    cout<<"destructor\n";
  }

};
int main (){ 

  if(true){
    static ABC obj;
  }

  cout<<"end of the main function\n";
  return 0;
}
