// Solution by Bernardo Salazar
// More efficient is to jump 3s

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int start = 3;
	while (n) {
		if(start % 4 != 0)	// make sure multiple of 4 too
			--n, cout<<start<<" ";
		start += 3;	// increment with 3: is multiple of 3
	}

	return 0;
}
