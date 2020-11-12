//Best, Average and Worst Case = O(n^2)

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr, int n)
{
    for(int i = 0; i < n-1 ; i++) {
        
        bool swapped = false; 
        
        for(int j = 0; j < n-i-1; j++) { //Value at n-i-1 will be maximum of all the values below this index
            if(arr[j] > arr[j+1]) { //Check if adjacent element is not in order
                
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        
        if(!swapped) //If array will be sorted this will exit the loop
            break;
        
    }
}


int main()
{
    vector<int> v = {5, 1, 4, 2, 8, 9};
    int n=6;
    BubbleSort(v, n);
    for(auto it = v.begin(); it < v.end(); it++)
        cout << *(it) << " "; //prints 1 2 4 5 8 9
    
    
    return 0;
}
