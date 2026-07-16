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

void selectSort(int arr[],int n){

  for(int i=0; i<n-1; i++){
    int minIndex = i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[minIndex]){
       minIndex = j;
      } 
    }
     int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
  }
}

int largestNum(int a, int b , int c){
  int largest = a; 
  if(b>largest) largest=b;
  if(c>largest) largest=c;
  return largest;

}
bool primeNumber(int n){ 
 
  if (n<=1) return false;
  //  int isPrime =true;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      return false;
    }
  }
 return true; 
  
}

int factorial (int n){
  int fact = 1;
  if(n==1) return fact;
  return n* factorial(n-1);

  
}

int fib(int n){
  if(n == 0)return 0;
  if(n == 1) return 1;
  return fib(n-1)+fib(n-2);
}
int main (){ 
  // int n ;
  // cout<<"enter a number: ";
  // cin>>n;
// cout<<"factorial of "<<n<<" is: "<<factorial(n)<<endl; 
// cout<<"fibo of "<<n<<" is: "<<fib(n)<<endl;
//   int n;
//   cout<<"enter a number: ";
// cin>>n;
// if(primeNumber(n)) cout<<"Prime Number"<<endl;
// else {
//   cout<<"not Prime Number"<<endl;
// }
// int arr[] = {3,1,4,2,12,11,8};
// int n = sizeof(arr)/sizeof(arr[0]);
// selectSort(arr, n );

//  for(int val: arr){
//   cout<<val<<" "; 
//  }
//  cout<<endl;

// cout<<largestNum(12,41,222)<<endl;


// digits sum
// int n , sum = 0;
// cout<<"enter a number: ";
// cin>>n;
// while(n>0){
//   sum += n%10;
//   n = n/10;
// }
// cout<<"sum of digits = "<<sum<<endl;
         // NUMBERS TRIANGLE
// for(int i=1 ;i<=4; i++){
//   for(int j = 1; j<=i; j++){
//     cout<<j;
//   }
//   cout<<endl;
// }
// int n = 5;
           // REVERSE TRIANGLE
// for(int i=1; i<=n; i++){
//   for(int j=n; j>=i; j--){
//     cout<<"*";
//   }
//   cout<<endl;
// }

        // PYRAMID
// for(int i=1; i<=n; i++){
//   for(int j = 1; j<=n-i; j++){
//     cout<<" ";
//   }
//   for(int j=1; j<=i; j++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// int arr[] = {1,2,4,5,23,52,123,21,523,12,12,11,23};
//  int first = INT_MIN;
//  int second = INT_MIN;
// int n = sizeof(arr)/sizeof(arr[0]);


//  for(int i=0; i<n; i++){
//   if(arr[i]>first){
//     second = first;
//     first = arr[i];
//   }
//   else if (arr[i]>second && first != arr[i]){
//     second = arr[i];
//   }
//  }
//  cout<<"first largest element:"<<first<<endl;
//  cout<<"second largest element:"<<second<<endl;

// int mx = arr[0];
// int mn = arr[0];

// for(int i=0; i<n; i++){
//   if(arr[i]>mx) mx = arr[i];
//   if(arr[i]<mn) mn = arr[i];

// }
//  cout<<"maximum: "<<mx<<endl;
//  cout<<"minimun: "<<mn<<endl;


// string str = "hello";
// int palindrom = false;
// int end = str.length()-1;
// int st = 0;
// while(st<end){
// if(str[st]!= str[end]){
//   palindrom = false;
//   break;
// }
//   st++;
//   end--;
// }
// if(palindrom) cout<<"palindrome"<<endl;
// else {
//   cout<<"not palindrome"<<endl;
// }



    // string str = "education";
    // int count = 0;

    // for(char ch : str) {

    //     if(ch == 'a' || ch == 'e' || ch == 'i' ||
    //        ch == 'o' || ch == 'u' ||
    //        ch == 'A' || ch == 'E' || ch == 'I' ||
    //        ch == 'O' || ch == 'U') {
    //         count++;
    //     }
    // }
    // cout << "Vowels: " << count;

  //  string str = "aaabbb";
  //   int freq[256] = {0};
  //   for(char ch: str){
  //     freq[ch]++;
  //   }

  //   for(int i=0; i<256; i++){
  //     if(freq[i]>0){
  //       cout<<char(i)<<"-->"<<freq[i]<<endl;
  //     }
  //   }

  cout<<fib(5)<<endl;

  return 0;
}
//g++ p1.cpp && ./a.exe