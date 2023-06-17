// Homework 1: Guess the output

#include<iostream>
using namespace std;

int main() {

	int a = 10, b = 20, c = 30, d = 40;

	cout << (a + b == c) << "\n";         // 30 == 30 >> t
	cout << (a + b + c >= 2 * d) << "\n";// 60 >= 80 >> f

	cout << (a > 5 || d < 30) << "\n"; // t or f  >> t
	cout << (a > 5 && d < 30) << "\n"; // t and f >> f
	cout << (a <= b && b <= c) << "\n";// t and t >> t

	// finish ^^

	cout << (a > 5 && d < 30 || c - b == 10) << "\n"; // f or t >> t

	cout << (a <= b && b <= c && c <= d) << "\n"; // t and t and t >> t


// 1010111
	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n";// f or f or t >> t
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n";// f or (f and t) >> f

	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n";// t or (f and f) or f >> t or f or f >> t
	cout << ( (a == 10 || b != 20) && c != 30 || d != 40 ) << "\n";// (t or f) and f or f
																      // t and f >> f or f >> f >> 0
	return 0;
}

