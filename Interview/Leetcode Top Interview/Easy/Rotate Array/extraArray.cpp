//ROTATE ARRAY
//Time - O(n)
//Space - O(n) - Another Array of Same size is used.


//Given an array, rotate the array to the right by k steps, where k is non-negative.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
      vector<int> v1; //Second vector to store the required array.
      
      for(int i = nums.size() - k; i < nums.size(); i++) 
       v1.push_back(v[i]);
    
      for(int i = 0; i < k+1; i++)
       v1.push_back(v[i]);
    }
};



 
 
