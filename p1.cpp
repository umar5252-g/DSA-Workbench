#include<iostream>
using namespace std;
#include<vector>

int decimalToBinary(int decNum){
   int ans = 0;
   int pow = 1;
   while(decNum>0){
    int rem = decNum%2;
    decNum = decNum/2;
    ans+=(rem * pow);
    pow = pow*10;
    
   }
   return ans;
}

void bubbleSort(vector<int>&arr){
  // int n = sizeof(arr)/sizeof(arr[0]);
  int n = arr.size();

  for(int i=0; i<=n-1; i++){
    for(int j = 0; j<n-1-i; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }  
}
bool isPalindrom (string str){
  int left = 0; 
  int right = str.length()-1;
  while(left<right){
    if(str[left]!=str[right]){
      return false;
    }
    else{
      left++;
      right--;
    }
  }
  return true;

}
// 
int main (){ ;
  // ios::sync_with_stdio(false); 
  // cin.tie(Null);
 vector<int>arr = {2,3,23,4,5,7,8,12,3,1};
 string str = "aabaaa";
if( isPalindrom(str)){
  cout<<str<<" is a palindrome"<<endl;
}
else {
  cout<<str<<" is not a palindrome"<<endl;

}

//  for(int val: arr){
//   cout<<val<<" "; 
//  }
//  cout<<endl;
  return 0;
}
//g++ p1.cpp && ./a.exe