// implementation of multiset
#include <iostream>
#include <iterator>
#include <set>
using namespace std;
/*
Multisets are a type of associative containers similar to the set, with the exception that (multiple elements can have the same values).
*/

int main()
{
	// empty multiset container
	multiset<int, greater<int> > mset;

	// insert elements in random order
	mset.insert(40);
	mset.insert(30);
	mset.insert(60);
	mset.insert(20);
	mset.insert(50);
	// 50 will be added again to
	// the multiset unlike set
	mset.insert(50);
	mset.insert(10);

	// printing multiset mset
	multiset<int, greater<int> >::iterator itr;
	cout << "\nThe multiset mset is : \n";
	for (itr = mset.begin(); itr != mset.end(); ++itr) {
		cout << *itr << " ";
	}
	cout << endl;

	// assigning the elements from mset to mset2
	multiset<int> mset2(mset.begin(), mset.end());

	// print all elements of the multiset mset2
	cout << "\nThe multiset mset2 \n"
			"after assign from mset is : \n";
	for (itr = mset2.begin(); itr != mset2.end(); ++itr) {
		cout << *itr << " ";
	}
	cout << endl;

	// remove all elements up to element
	// with value 30 in mset2
	cout << "\nmset2 after removal \n"
			"of elements less than 30 : \n";
	mset2.erase(mset2.begin(), mset2.find(30));
	for (itr = mset2.begin(); itr != mset2.end(); ++itr) {
		cout << *itr << " ";
	}

	// remove all elements with value 50 in mset2
	int num;
	num = mset2.erase(50);
	cout << "\nmset2.erase(50) : \n";
	cout << num << " removed \n";
	for (itr = mset2.begin(); itr != mset2.end(); ++itr) {
		cout << *itr << " ";
	}

	cout << endl;

	// lower bound and upper bound for multiset mset
	cout << "\nmset.lower_bound(40) : \n"
		<< *mset.lower_bound(40) << endl;
	cout << "mset.upper_bound(40) : \n"
		<< *mset.upper_bound(40) << endl;

	// lower bound and upper bound for multiset mset2
	cout << "mset2.lower_bound(40) : \n"
		<< *mset2.lower_bound(40) << endl;
	cout << "mset2.upper_bound(40) : \n"
		<< *mset2.upper_bound(40) << endl;

	return 0;
}
/*
Some Basic Functions associated with multiset: 
begin() – Returns an iterator to the first element in the multiset –>  O(1)
end() – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
size() – Returns the number of elements in the multiset –> O(1)
max_size() – Returns the maximum number of elements that the multiset can hold –> O(1)
empty() – Returns whether the multiset is empty –> O(1)
insert (x) – Inserts the element x in the multiset –> O(log n)
clear () – Removes all the elements from the multiset –> O(n)
erase(x) – Removes all the occurrences of x –> O(log n)
*/