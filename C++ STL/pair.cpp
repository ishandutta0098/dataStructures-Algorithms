#include <iostream>
using namespace std;
	
	void ExplainPair() 
	{
	    //1. DECLARE PAIR:
	    pair<int, int> p1 = {1,3};
	    
	    cout<<p1.first<<" "<<p1.second<<endl;
	    //prints 1 2 
	    
	    //2. PAIR OF PAIR:
	    //pair<int, pair<int, int>> p2 = {1, {3,4}};
	    
	    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;
	    //prints 1 4 3 
	    
	    //3. PAIR OF ARRAY:
	    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
	    
	    cout<<arr[1].second;
	    //prints 2;
	}
	
	int main() {
	ExplainPair();
	return 0;
}
