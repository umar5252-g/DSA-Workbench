
#include <iostream>
#include<vector>
using namespace std;

int merg(vector<int> &arr, int st, int end, int mid){
  vector<int>temp;
  int i = st, j = mid+1;
  int invCount=0;
  while(i<=mid && j<=end){
    if(arr[i]<=arr[j]){
      temp.push_back(arr[i]);
      i++;
    }
    else {
      temp.push_back(arr[j]);
      invCount += mid-i+1;
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
    return invCount;
}
int mergeSort(vector<int> &arr, int st, int end){
  if(st<end){
    int mid = st+(end-st)/2;
    mergeSort(arr, st, mid);
    mergeSort(arr, mid+1, end);

 return merg(arr,st, end, mid);
  
  }
 return 0;
}


int main() {
 vector<int>arr = {1,3,5,10,2,6,8,9};  \
 int end = arr.size()-1;
int invCount =  mergeSort(arr,0,end);
cout<<invCount<<endl;
return 0;
}


// g++ test1.cpp -o temp && ./temp