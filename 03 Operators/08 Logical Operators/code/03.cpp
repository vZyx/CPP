#include<iostream>
using namespace std;

int main() {

	int age {30}, salary {7000}, weight {110};

	// ANDs are evaluated
	cout << ( age > 35 || salary > 6000  && weight > 200) << "\n";/* f or t and f = 
																	 f or f = false 0
	*/

	// () are evaluated FIRST even before some ANDS
	
	cout << ( (age > 35 || salary > 6000) && weight > 200) << "\n";/* (f or t) and f 	
																		t and f = false 0
	*/

	return 0;
}

