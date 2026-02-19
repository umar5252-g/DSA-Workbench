#include <iostream>
using namespace std;
int linearSearch (int arr[],int size, int target){
  for (int i = 0; i <size; i++)
  {
    if (arr[i]==target){
      return i;
    }
  }
  return -1;
  
}
int main()
{ const int size = 6;
  int arr[size] = {21,324,45,54,34,8};
int target = 3;
cout<<linearSearch(arr,size , target)<<endl;

  return 0;
}
