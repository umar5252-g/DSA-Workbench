#include<iostream>
#include<vector>
#include<string>
using namespace std;
int DecToBIn(int decimal){
  int ans = 0 , pow = 1;
  while (decimal>0){
    int rem = decimal % 2;
   
    ans += (rem*pow);

    pow = pow * 10 ;
    decimal = decimal/2;
  }
  return ans;
}

int BinForm (int binNum){
  int ans = 0, pow = 1;
  while (binNum>0){
    int rem = binNum%10;
 

    ans += rem * pow;

    pow = pow*2;
    binNum /=10;

  }
  return ans;
}

 string baseNeg2(int n) {
        if (n == 0) return "0";
        string res = "";
        
        while (n != 0) {
            int remainder = n % -2;
            n /= -2;
            
            // if remainder is negative, adjust it
            if (remainder < 0) {
                remainder += 2;
                n += 1;
            }
            
            res = to_string(remainder) + res; // build from right to left
        }
        
        return res;
    }

int main (){ 
  

  string res = baseNeg2(-12) ;

  cout << res<<endl;

  return 0;
}