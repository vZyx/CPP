#include<iostream>
using namespace std;

int main() {
	int age {30}, salary {7000}, weight {110};

	cout<<(  (age > 25) && (salary < 8000) && (weight < 150) )<<"\n";// t and t and t = true 1
	cout<<(  (age > 25) && (salary < 8000) && (weight > 200) )<<"\n";// t and t and f  = false 0

	cout<<(  (age > 35) || (salary > 6000) || (weight > 200) )<<"\n";// f or t or f = true 1     


	cout<<(  (age > 35) && (salary > 6000) || (weight > 200) )<<"\n";/*  f and t or f 
																	     f or f = false 0
																					     */
	cout<<(  (age > 20) && (salary > 6000) || (weight > 200) )<<"\n";/* t and t or f
																		    t   or f = true 1  
	*/
 
	return 0;
}

