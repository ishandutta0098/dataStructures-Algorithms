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
	            
	   //7. ERASE
	   
	        vector<int> v6{10,20,30,40,50,60}
	   
	        //7.1 ERASE FIRST ELEMENT
	        v5.erase(v5.begin());  //{20 30 40 50 60}
	        
	        //7.2 ERASE SECOND ELEMENT
	        v5.erase(v5.begin() + 1); //{10 30 40 50 60}
	        
	        //7.3 ERASE IN A RANGE (Excludes last element of Range)
	        v5.erase(v5.begin() + 2, v5.begin() + 4) //{10 20 50 60}
	        
	        //7.4 ERASE ENTIRE VECTOR
	        v5.clear();
	        
	        //7.5 CHECK IF VECTOR IS EMPTY
	        cout << v5.empty();
	        
	   //8. INSERT
	   
	        vector<int> v7(2,100); //{100 100}
	        
	        //8.1 INSERT AT BEGINNING
	        v7.insert(v7.begin(), 300); //{300 100 100}
	        
	        //8.2 INSERT SAME ELEMENTS AT POSITION
	        v7.insert(v7.begin() + 1, 2, 10); //{300 10 10 100 100}
	        
	        //8.3 INSERT A VECTOR IN VECTOR
	        vector<int> copy(2,50); //{50 50}
	        v7.insert(v7.begin(), copy.begin(), copy.end()); //{50 50 300 10 10 100 100}
	        
	   //9. SIZE
	        vector<int> v8{10, 20};
	        
	        cout << v8.size(); //prints 2
	        
	   //10. POP
	        v8.pop_back(); //{10} 
	        
	   //11. SWAP VECTORS
	   
	        vector<int> v9{10, 20};
	        vector<int> v10{30, 40};
	        
	        v9.swap(v10);
	    }
	
	
	int main() {
	ExplainPair();
	return 0;
}
