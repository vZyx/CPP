#include<iostream>
using namespace std;

int main() {

	int age {30}, salary {7000};

	bool result = (age > 25) && (salary < 8000); // t and t = true

	cout<<result<<"\n"; // true

	cout<<(  (age > 25) && (salary > 9000) )<<"\n"; // t and f = false

	cout<<(  (age > 35) || (salary < 8500) )<<"\n";// f or t = true
	cout<<(  (age > 35) || (salary > 9000) )<<"\n";// f or f = false

	return 0;
}

