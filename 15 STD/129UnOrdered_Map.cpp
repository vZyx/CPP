// C++ program to demonstrate
// functionality of unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;

/*
unordered_map is an associated container that stores elements formed by the combination of a key value and a mapped value.
The key value is used to uniquely identify the element and the mapped value is the content associated with the key.

Both key and value can be of any type predefined or user-defined.
In simple terms, an unordered_map is like a data structure of dictionary type that stores elements in itself.

It contains successive pairs (key, value), which allows fast retrieval of an individual element based on its unique key.

Internally unordered_map is implemented using Hash Table,
the key provided to map is hashed into indices of a hash table
Which is why the performance of data structure depends on the hash function a lot but on average, the cost of search, insert, and delete from the hash table is O(1). 
*/

int main()
{
    // Declaring umap to be of
    // <string, int> type key
    // will be of STRING type
    // and mapped VALUE will
    // be of int type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " <<
        x.second << endl;

    return 0;
}

/*
Methods on unordered_map 
A lot of functions are available that work on unordered_map. The most useful of them are:

insert() – to insert an element in the map.
begin() – return an iterator pointing to the first element in the map.
end() – returns an iterator to the theoretical element after the last element.
clear() – deletes all the elements in the map.
find() – to search for an element in the map.
erase() – to delete a single element or elements between a particular range.
size() – returns the number of elements on the map.
empty() – to check if the map is empty or not.




*/
