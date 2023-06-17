#include<iostream>
using namespace std;

int main() {
	int x {6};
	int y {-x};	// -6

	bool male {true};
	bool female { !male }; // False

	// 1 0
	cout << (!0) <<" "<<(!1)<<endl;

	return 0;
}

