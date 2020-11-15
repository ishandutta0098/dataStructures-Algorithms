#include <bits/stdc++.h>
using namespace std;

int main()
{
vector<int> nums = {1,2,3,4,5,6,7}

reverse(nums.begin(), nums.begin() + 3);

for(auto it = nums.begin(); it < nums.end(); it++) 
    cout << *(it) << " "; //prints 3 2 1 4 5 6 7
    
    return 0;
}
