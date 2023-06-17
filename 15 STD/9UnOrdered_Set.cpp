// C++ program to demonstrate various function of
// unordered_set
#include <bits/stdc++.h>
using namespace std;
/*                      unique elements and randomized
An unordered_set is an unordered associative container implemented using a hash table where keys are hashed into indices of a hash table
So that the insertion is always randomized.

All operations on the unordered_set take constant time O(1) on an average which can go up to linear time O(n) in the worst case
which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 

The unordered_set can contain a key of any type – predefined or user-defined data structure but all the keys must be unique.

unordered set is implemented as a hash table data structure whereas the regular set is implemented as a binary search tree data structure.
*/

int main()
{
	// declaring set for storing string data-type
	unordered_set<string> stringSet;

	// inserting various string, same string will be stored
	// once in set

	stringSet.insert("code");
	stringSet.insert("in");
	stringSet.insert("c++");
	stringSet.insert("is");
	stringSet.insert("fast");

	string key = "slow";

	// find returns end iterator if key is not found,
	// else it returns iterator to that key
    //key : slow
	if (stringSet.find(key) == stringSet.end())
		cout << key << " key not found" << endl << endl;
	else
		cout << "Key is Found:  " << key << endl << endl;

    //key : c++
	key = "c++";
	if (stringSet.find(key) == stringSet.end())
		cout << key << "key not found\n";
	else
		cout << "Key is Found: " << key << endl;

	// now iterating over whole set and printing its
	// content
	cout << "\nAll elements : ";

	unordered_set<string>::iterator itr;
	for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
		cout << (*itr) << endl;
}
/*
most used functions are:

The size() and empty() for capacity.
The find() for searching a key.
The insert () and erase() for modification.

lower_bound and upper_bound doesn't work, rest functions are same as sets
*/