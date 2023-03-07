#include<iostream>
using namespace std;
	// find the min of 2 int
int main() {
	int num1, num2;
	
	cout<<"enter 2 numbers: ";
	cin >> num1 >> num2;

	if (num1 < num2)
		cout << num1 << "\n";
	else
		cout << num2 << "\n";

	return 0;
}

