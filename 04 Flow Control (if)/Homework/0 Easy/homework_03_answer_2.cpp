#include<iostream>
using namespace std;


int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	int res = -1;

	// The next 3 if conditions: let's try to initalize res correctly
	if (a < 100)
		res = a;

	if (b < 100)
		res = b;

	if (c < 100)
		res = c;

	// The next 3 if conditions: let's get the valid max
	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}

// Try -20 -10 -30
