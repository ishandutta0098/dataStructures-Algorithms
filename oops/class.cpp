#include <iostream>
using namespace std;

/*Everything is Private by delault in a class.
C++ has 3 Access Modifiers; Private, Public & Protected

1. PRIVATE: Can be accessed only inside the class
2. PUBLIC: Can be accessed outside the class
3. PROTECTED: In between Public and Private
*/

class Employee{
public:
  string name;
  string company;
  int age;
  
  void Introduce() {
      cout << "Name - " << name << endl;
      cout << "Company - " << company << endl;
      cout << "Age - " << age << endl;
      
  }
};

int main() {
	
	Employee emp1; //emp1 is object of type Employee
	
	//Set Attribute Values
	emp1.name = "Ishan";
	emp1.company = "YouTube";
	emp1.age = 21;
	
	//Invoke Class Method
	emp1.Introduce(); 
  
  /*output: 
  Name - Ishan
  Company - YouTube
  Age - 21
  */
	
	Employee emp2; //emp2 is object of type Employee
	
	//Set Attribute Values
	emp2.name = "Rahul";
	emp2.company = "Amazon";
	emp2.age = 25;
	
	//Invoke Class Method
	emp2.Introduce();
  
  /*output:
  Name - Rahul
  Company - Amazon
  Age - 25
  */
	
	return 0;
}
