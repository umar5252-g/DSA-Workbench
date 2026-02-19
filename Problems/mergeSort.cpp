
#include <iostream>
#include<vector>
using namespace std;

void merg(vector<int> &arr, int st, int end, int mid){
  vector<int>temp;
  int i = st, j = mid+1;

  while(i<=mid && j<=end){
    if(arr[i]<=arr[j]){
      temp.push_back(arr[i]);
      i++;
    }
    else {
      temp.push_back(arr[j]);
      j++;
    }
  }
  while(i<=mid){
      temp.push_back(arr[i]);
      i++;
    }
    while (j<=end){
      temp.push_back(arr[j]);
      j++;
    }

    for(int i=0; i<temp.size(); i++){
      arr[i+st] = temp[i];
    }
}
void mergeSort(vector<int> &arr, int st, int end){
  if(st<end){
    int mid = st+(end-st)/2;
    mergeSort(arr, st, mid);
    mergeSort(arr, mid+1, end);

    merg(arr,st, end, mid);
  }
}


int main() {
 vector<int>arr = {12,35,17,32,8,31};  \
 int end = arr.size()-1;
 mergeSort(arr,0,end);
 for(int val : arr){
  cout<<val<<" ";
 }
 cout<<endl;
return 0;
}





// g++ test1.cpp -o temp && ./temp