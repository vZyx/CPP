// C++ program to demonstrate various function of Multi Maps
//Multi Maps
#include <iostream>
#include <iterator>
#include <map>
using namespace std;
/* 
Multimap is similar to a map with the addition that multiple elements can have the same keys.
Also, it is NOT required that the key-value and mapped value pair have to be unique in this case.

One important thing to note about multimap is that multimap keeps all the keys in sorted order always.
These properties of multimap make it very much useful in competitive programming.
*/

int main()
{
	multimap<int, int> gquiz1; // empty multimap container

	// insert elements in random order
	gquiz1.insert(pair<int, int>(1, 40));
	gquiz1.insert(pair<int, int>(2, 30));
	gquiz1.insert(pair<int, int>(3, 60));
	gquiz1.insert(pair<int, int>(6, 50));
	gquiz1.insert(pair<int, int>(6, 10));

	// printing multimap gquiz1
	multimap<int, int>::iterator itr;
	cout << "\nThe multimap gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// adding elements randomly,
	// to check the sorted keys property
	gquiz1.insert(pair<int, int>(4, 50));
	gquiz1.insert(pair<int, int>(5, 10));

	// printing multimap gquiz1 again

	cout << "\nThe multimap gquiz1 after adding extra "
			"elements is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// assigning the elements from gquiz1 to gquiz2
	multimap<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

	// print all elements of the multimap gquiz2
	cout << "\nThe multimap gquiz2 after assign from "
			"gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}
	cout << endl;

	// remove all elements up to
	// key with value 3 in gquiz2
	cout << "\ngquiz2 after removal of elements less than "
			"key=3 : \n";
	cout << "\tKEY\tELEMENT\n";
	gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	// remove all elements with key = 4
	int num;
	num = gquiz2.erase(4);
	cout << "\ngquiz2.erase(4) : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second
			<< '\n';
	}

	cout << endl;

	// lower bound and upper bound for multimap gquiz1 key =
	// 5
	cout << "gquiz1.lower_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.lower_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
		<< endl;
	cout << "gquiz1.upper_bound(5) : "
		<< "\tKEY = ";
	cout << gquiz1.upper_bound(5)->first << '\t';
	cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
		<< endl;

	return 0;
}


/*
Some Basic Functions associated with multimap: 

insert() – to insert an element in the multimap.
begin() – Returns an iterator to the first element in the multimap
end() – Returns an iterator to the theoretical element that follows last element in the multimap
size() – Returns the number of elements in the multimap
erase() – to delete a single element or elements between a particular range.
max_size() – Returns the maximum number of elements that the multimap can hold
empty() – Returns whether the multimap is empty
pair<int,int> insert(keyvalue,multimapvalue) – Adds a new element to the multimap

multimap lower_bound()	Returns an iterator to the first element that is equivalent to multimapped value with key-value ‘g’
or definitely will not go before the element with key-value ‘g’ in the multimap.

multimap key_comp() 	Returns the object that determines how the elements in the multimap are ordered (‘<‘ by default).

*/
