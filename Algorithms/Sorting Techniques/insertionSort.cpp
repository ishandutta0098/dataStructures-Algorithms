//Best case Time Complexity = O(n)
//Average/Worst Case Time Complexity = O(n^2)

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr, int N)
{
    
        int i, j,  key;
        
        for(i = 1; i < N; i++) {
            
            key = arr[i]; //Selects the first unsorted element
            j = i-1;
            
            while(j >= 0 && arr[j] > key) { //This loop shifts all elements to right to create the position for the unsorted element
                arr[j+1] = arr[j];
                j--;       
                
            }
            
            arr[j+1] = key; //Insert the unsorted element to the correct position
           
        }  
    }



int main()
{
    vector<int> v = {8, 6, 5, 9, 3, 11};
    int N=6;
    InsertionSort(v, N);
    for(auto it = v.begin(); it < v.end(); it++)
        cout << *(it) << " "; //prints 3 5 6 8 9 11
    
    
    return 0;
}
