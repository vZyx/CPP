// C++ Program to Demonstrate set
#include <iostream>
#include <set>
using namespace std;
/*
Sets are a type of associative container in which each element has to be unique because the value of the element identifies it.
The values are stored in a specific sorted order i.e. either ascending or descending.

set is implemented as a binary search tree data structure.

*/

int main()
{
	set<char> st;
	st.insert('G');
	st.insert('F');
	st.insert('G');

	for (auto& str : st) {
		cout << str << ' ';
	}
    auto it = st.find(0);
    //Sets only accepts a unique value.
	cout << '\n';
	return 0;
}

/*
    Properties
Storing order – The set stores the elements in sorted order.
Values Characteristics – All the elements in a set have unique values.
Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Search Technique – Sets follow the Binary search tree implementation.
Arranging order – The values in a set are not tied to an index (unindexed).

    Some Basic Functions Associated with Set

begin()     – Returns an iterator to the first element in the set.
end()       – Returns an iterator to the theoretical element that follows the last element in the set.
*size()      – Returns the number of elements in the set.
max_size()  – Returns the maximum number of elements that the set can hold.
empty()     – Returns whether the set is empty.
*erase( g)	  Removes the value ‘g’ from the set.
find( g)	- Returns an iterator to the element ‘g’ in the set if found, else returns the iterator to the end.
*count( g)	  Returns 1 or 0 based on whether the element ‘g’ is present in the set or not.

works like a vector
lower_bound(g)	Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.
upper_bound(g)	Returns an iterator to the first element that will go after the element ‘g’ in the set.

The time complexities for doing various operations on sets are:

Insertion of Elements – O(log N)
Deletion of Elements – O(log N)

*/
