//ROTATE ARRAY

//Time - O(n) n elements are reversed a total of three times.
//Space - O(1) No extra space is used.

//Given an array, rotate the array to the right by k steps, where k is non-negative.

/*This approach is based on the fact that when we rotate the array k times, 
k%nk elements from the back end of the array come to the front and the rest of the elements from the front shift backwards.

In this approach, we firstly reverse all the elements of the array. 
Then, reversing the first k elements followed by reversing the rest n-kn−k elements gives us the required result.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
int k = 10;
int n;
n = nums.size();

k = k % n; //This is the number of rotations that will be required, as after a certain point the patters repeats itself.

reverse(nums.begin(), nums.end()); //Reverse entire array - {7 6 5 4 3 2 1}
reverse(nums.begin(), nums.begin() + k); //Reverse the rotated part - {5 6 7 4 3 2 1}
reverse(nums.begin() + k, nums.end()); //Reverse the left part - {5 6 7 1 2 3 4}
    
for(auto it = nums.begin(); it < nums.end(); it++) 
    cout << *(it) << " "; //prints 5 6 7 1 2 3 4
    
    return 0;
}
