#include<iostream>
using namespace std;

int main() {
	cout<<"Enter 2 postive numbers: ";
	int n, m;
	cin >> n >> m;
	// find the raminder with out using %
	// let's try 13/5
	// 13/5 = 2  [2 complete units, each is 5]
	// 2*5 = 10  [total complete units]
	// Reminder is 13-10 = 3. This number generates the fractional part
	int result = n - (n / m) * m;

	cout << result << " " << n % m << "\n";

	return 0;
}

