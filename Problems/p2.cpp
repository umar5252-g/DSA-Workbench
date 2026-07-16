#include<iostream>
using namespace std;
#include<vector>

// bool binarySearch(vector<int>nums, int tar){
//   int st = 0;
//   int end = nums.size()-1;

//   while(st<end){
//     int mid = st+(end-st)/2;
//     if(nums[mid]==tar) return true;
//     else if(nums[mid]<tar){
//       st = mid+1;
//     }
//     else {
//       end = mid-1;
//     }
//     return false;
//   }

// }

int SingleElementInSortedArray(vector<int>arr){
  int n = arr.size();
  int st = 0; 
  int end = n-1;
  while(st<end){
    int mid = st+(end-st)/2;
    if(mid ==0 && arr[0]== arr[0]!= arr[1]){
      return arr[mid];
    }
  if(mid == n-1 && arr[n-1] != arr[n-2]){
      return arr[mid]; 
    }
     if(arr[mid-1]!= arr[mid] && arr[mid]!= arr[mid+1]){
      return arr[mid];
     }
     if(mid%2==0){
      if(arr[mid]== arr[mid-1]){
        end = mid-1;
      }
      else {
        st = mid+1;
      }
     }
     else {
      if(arr[mid]==arr[mid-1]){
       st = mid+1;
      }
      else {
        end = mid-1;
      }
     }
  }
  return -1;
}

class Student {
  public:
  string name;
  int age;
  Student(string n, int a){
   name = n;
   age = a;
  }
  void display(){
    cout<<"name: "<<name<<endl;
    cout<<"age:  "<<age<<endl;
  }

};
int main (){
    Student s1("umar", 21);
    s1.display();
  // string str = "hello my name is umar";
  // string ans = "";
  // for(char ch: str){
  //   if(ch !=' '){
  //     ans += ch;
  //   }
  // }
  // cout<<ans<<endl;

  // string str = "hello";
  // for(char &ch: str){
  //   if(ch >='a' && ch<='z'){
  //     ch = ch-32;
  //   }
  // }
  // cout<<str<<endl;

  return 0;
}