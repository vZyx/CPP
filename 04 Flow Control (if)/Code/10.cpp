#include<iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter a number: ";
	cin >> num;

	bool is_even = (num % 2 == 0);

	if (is_even)
		cout << num % 10 << "\n";
	else {
		if (num < 1000)
			cout << num % 100 << "\n"; //print last 2 digits
		else if (num < 1000000)
			cout << num % 10000 << "\n";//print last 4 digits

		else
			cout << -num << "\n";//print its negative value
	}
	return 0;
}

