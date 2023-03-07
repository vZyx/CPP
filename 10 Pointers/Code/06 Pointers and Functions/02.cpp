#include <iostream>
#include <vector>
using namespace std;

int* max(int *p1, int *p2) {
	if (p1 == nullptr)
		return p2;

	if (p2 == nullptr)
		return p1;

	if (*p1 > *p2)
		return p1;
	return p2;
}

int main() {

	int x = 1, y = 5;
	int *p = max(&x, &y);

	cout << *p << "\n";

	return 0;
}
