#include<iostream>
using namespace std;

int main() {
	cout << "Enter your salary: ";
	int salary;
	cin>>salary;
	// reads simple int and (if num < 1000 ) prints "you are poor"
	if (salary < 1000)
		cout<<"you are poor\n";

	cout<<"Done";

	return 0;
}

