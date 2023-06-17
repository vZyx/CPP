
#include<iostream>
using namespace std;

int main() {
	const int size = 5;

	// Declare 5 positions of type integer
	int numbers[size] = {1, 2, 3, 4, 5};

	for (int i=0; i<size; ++i) {//print all the values in the array
		cout<<numbers[i]<<" ";
	}
	cout<<"\n";

	for (int i=0; i<size; ++i) {//print all the values in the array backwards
	cout<<numbers[size-i-1]<<" ";
	}
	cout<<"\n";

	return 0;
}

