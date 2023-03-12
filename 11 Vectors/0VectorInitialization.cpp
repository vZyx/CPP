
/* 
Vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.
That is, we can change the size of the vector during the execution of a program as per our requirements.

The vector header file provides various functions that can be used to perform different operations on a vector.

size()		returns the number of elements present in the vector
clear()		removes all the elements of the vector
front()		returns the first element of the vector
back()		returns the last element of the vector
empty()	    returns 1 (true) if the vector is empty
capacity()	check the overall size of a vector
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

  	// initializer list
	vector<int> vector1 = {1, 2, 3, 4, 5};

  	// uniform initialization
    vector<int> vector2 {1, 2, 3, 4, 5};

  	// method 3
	vector<int> vector3(5, 12);

	cout << "vector1 = ";

	// ranged loop
	for (const int& i : vector1) {
    cout << i << "  ";
	}

	cout << "\nvector2 = ";

	// ranged loop
	for (const int& i : vector2) {
    cout << i << "  ";
	}

	cout << "\nvector3 = ";

  	// ranged loop
	for (int i : vector3) {
    cout << i << "  ";
	}

	return 0;
}