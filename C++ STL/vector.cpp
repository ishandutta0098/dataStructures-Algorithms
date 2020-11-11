#include <iostream>
using namespace std;


	
	void ExplainVector() 
	{
	   //1. EMPTY VECTOR:
	   vector<int> v1; //{}
	   
	   //2. ADD ELEMENT AT END 
	   v1.push_back(1); //{1}
	   v1.emplace_back(2); //{2}
	   
	   //3. VECTOR WITH PAIR
	   vector<pair<int, int>> v2;
	   
	   v2.push_back({1,2}); //{{1,2}}
	   V2.emplace_back(3,4); //{{1,2}, {3,4}}
	   
	   //4. VECTOR DECLARED WITH ALL EQUAL VALUES
	   vector<int< v3(5,10); //{10, 10, 10, 10, 10}
	   
	   //5. VECTOR COPY
	   vector<int> v4(v3); //{10, 10, 10, 10, 10}
	   
	   //6. ITERATOR
	   vector<int> v5{10, 20, 30, 40, 50}
	   
	        //6.1 SYNTAX
	        vector<int>::iterator it = v.begin(); //Points to 10
	        
	        it++; 
	        cout<< *(it) << endl; //prints 20
	        
	        //To not allow to change iterator
	        vector<int>::iterator it = v.cbegin();
	        
	        vector<int>::iterator it = v.end(); //Points to memory address after end i.e., after 40
	        
	        vector<int>::iterator it = v.rend(); //Points to memory address before beginning i.e., before 10
	        
	        vector<int>::iterator it = v.rbegin(); //Points to memory address at end i.e., at 40
	   
	        //6.2 ACCESSING ELEMENTS OF VECTOR
	        cout << v5[0] << " " << v5.at(1); //prints 10 20
	        
	        cout << v5.back() << endl; //prints 40
	        
	        //6.3 PRINTING VECTOR
	        
	            //GENERAL METHOD:
	            for(vector<int>::iterator it = v5.begin(), it !=v5.end(); it++) {
	                cout << *(it) << " "; //prints 10 20 30 40
	            }
	            
	            //USING AUTO
	            //'auto' automatically converts itself to the required data type (int this case as an iterator)
	            
	            for(auto it = v5.begin(); it !=v5.end(); it++) {
	                cout << *(it) << " "; //prints 10 20 30 40
	            }
	            
	            //Moving through the elements in place of iterator
	            for(auto : v5) {
	                cout << it << " "; //prints 10 20 30 40
	            }
	}
	
	
	int main() {
	ExplainPair();
	return 0;
}
