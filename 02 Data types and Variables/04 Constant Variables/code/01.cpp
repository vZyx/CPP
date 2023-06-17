#include <iostream>
#include <climits> // INT_MAX
using namespace std;

int main() {
	// Use capital letters
	const double PI = 3.14159;
	//PI = 10;	// CAN't change

	const int LUCKY { 13 };

	//const int x;	 CAN'T you must assign value

	const char charVal = 'A';

	const string str = "Welcome to our BANK";

	// C++ limits as const
	cout << INT_MAX << "\n";	// 2147483647
	cout << INT_MIN << "\n";	// -2147483648

	return 0;
}
