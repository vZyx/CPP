#include<iostream>
using namespace std;
//power functions
int main() {
	int num = 2;
	int pow = 3;

	int result = 1;

	while (pow >= 1) {
		result *= num;
		--pow;
	}
	cout << result;
	return 0;
}
