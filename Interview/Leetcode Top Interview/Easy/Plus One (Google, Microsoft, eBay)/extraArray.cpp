//PLUS ONE

//Time - O(n)
//Space - O(n)

/*
Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> plusOne(vector<int> &digits) {
          
          for(int i = digits.size() - 1; i >= 0; i--) {
              
              if(digits[i] < 9) {
                  digits[i]++;
                  return digits;
              }
              
              else {
                  digits[i] = 0; //Will make 9's as 0's and go to next iteration 
                }
          }
          
          //If we are reaching this part it means that the number has only 9's (eg 99 or 999),
          //so we create a new vector with 1 as first element, then insert 'digits' at it's end.
          
          vector<int> new_digits = {1};
          new_digits.insert(new_digits.end(), digits.begin(), digits.end()); 
          
          return new_digits;
            
        }
};

int main() {
    
    Solution ob;
    vector<int> digits = {9,9};
    
    digits = ob.plusOne(digits);
    
    for(auto it = digits.begin(); it < digits.end(); it++) {
        cout << *(it) << " "; //prints 1 0 0
    }
    return 0;
}
