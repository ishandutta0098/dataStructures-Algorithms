//Best/Average/Worst Case Time Complexity = O(n^2)

#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr, int n)
{
    int MIN_IDX;
    
    for(int i = 0; i < n-1; i++) {
        
        MIN_IDX = i; //MIN_IDX will store the position of the smallest element in the unsorted subarray.
         
        for(int j = i+1; j < n; j++) {
            
            if(arr[j] < arr[MIN_IDX])
                MIN_IDX = j;
                
            
        }
        
        swap(arr[MIN_IDX], arr[i]); //Swap the minimum value and put it in the sorted subarray.
        
      }
}


int main()
{
    vector<int> v = {64, 25, 12, 22, 11};
    int n=5;
    SelectionSort(v, n);
    for(auto it = v.begin(); it < v.end(); it++)
        cout << *(it) << " "; //prints 11 12 22 25 64
    
    
    return 0;
}
