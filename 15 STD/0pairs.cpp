// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility> // pairs
using namespace std;
/*
Pair is used to combine together two values that may be of different data types.
Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples.
The pair container is a simple container defined in <utility> header consisting of two data elements or objects.

•The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
•To access the elements, we use variable name followed by dot operator followed by the keyword first or second.

•Pair can be assigned, copied, and compared.
The array of objects allocated in a map or hash_map is of type ‘pair’ by default
in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.

*/

int main()
{
	// defining a pair
	pair<int, int> PAIR1 = {1, 3};

    cout << PAIR1.first << " " << PAIR1.second << endl;

    // nested pair to add more than two elements
	pair<int, pair<int, int> > PAIR2 = { 1, {3, 5} };
	
    cout << PAIR2.first << " " << PAIR2.second.first << " " << PAIR2.second.second << endl;

    //Arrays pair       index   0        1       2
    pair<int, int> arr[] = { {1, 3}, {5, 7}, {9, 11} };

    cout<< arr[1].second; // print 7

	return 0;
}
