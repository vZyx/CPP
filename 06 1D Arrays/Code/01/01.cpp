#include<iostream>
using namespace std;

int main() {
	const int size = 5;

	// Declare 5 positions of type integer
	int numbers[size] = {10, 2, 7, 5, 3};


	numbers[0] = 9;//9 
	numbers[2] *= 3; //21 multplying the value in index 2 (7) by 3

//  array[i]++ increments the value of array[i]. The expression evaluates to array[i] before it has been incremented.
	numbers[4]++;//4 incrementing the value in index 3

	cout<<numbers[4]<<endl;// try 4,2,0. 
	cout<<numbers[0]<<endl;
	cout<<numbers[2]<<endl;
	return 0;
}
