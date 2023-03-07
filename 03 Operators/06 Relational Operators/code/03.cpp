#include<iostream>
using namespace std;

int main() {
	int x, y;
	x = 3, y = 5;

	bool result = (x > y); // 0
	cout << result << "\n";

	result = (x < y);// 1
	cout << result << "\n";

	cout << !result << "\n";// !1 = 0
	cout << !(x < y) << "\n"; // !1 = 0

	return 0;
}
