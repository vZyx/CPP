#include<iostream>
using namespace std;

int main() {
	// d, r, u, l
	int dimensionsi[] = {1, 0, -1, 0};
	int dimensionsj[] = {0, 1, 0, -1};

	int i = 4, j = 7;

	for (int d = 0; d < 4; ++d) {
		int ni = i + di[d];
		int nj = j + dj[d];
		cout<<ni<<" "<<nj<<"\n";
	}

	/*

	5 7
	4 8
	3 7
	4 6

	*/
	return 0;
}