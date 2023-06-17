#include<iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;

	bool is_a_even = (a % 2 == 0);//even number
	bool is_b_even = (b % 2 == 0);//even number

	if (!is_a_even && !is_b_even) // all odd
		cout << a * b << "\n";//both are odd so get the product

	else if (is_a_even && is_b_even)// both are even so divide them
		cout << a / b << "\n";
	else if (!is_a_even && is_b_even) // one odd, and one even sum them
		cout << a + b << "\n";
	else// even, odd so subtract them
		cout << a - b << "\n";

	return 0;
}

