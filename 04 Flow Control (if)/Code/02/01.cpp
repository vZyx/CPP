#include<iostream>
using namespace std;

int main() {

	cout<<"Enter your salary: ";
	int salary;
	cin>>salary;

	if (salary < 1000)
		cout<<"you are poor\n";

	else if (salary >= 1000 && salary < 20000) // 
		cout<<"good salary\n";

	else// neither of them are true so do this:
		cout<<"you are rich\n";

	return 0;
}

