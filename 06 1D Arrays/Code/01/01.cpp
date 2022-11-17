#include<iostream>
using namespace std;

int main() {
	const int size = 5;

	// Declare 5 positions of type integer
	int numbers[size] = {10, 2, 7, 5, 3};


	numbers[0] = 9;//9 
	numbers[2] *= 3; //21 multplying the value in index 2 (7) by 3
	numbers[4]++;//4 incrementing the value in index 3

	cout<<numbers[0];// try 4,2,0. 

	return 0;
}
