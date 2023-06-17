// C++ program to demonstrate various function of Maps
//Maps
#include <iostream>
#include <map>

/* stores unique keys in sorted order similar to
Maps are associative containers that store elements in a mapped fashion(paired data). These paired data are called key-value pairs.
Each element has a key value and a mapped value. No two mapped values can have the same key values(unique).
*/
int main()

{   // create a map with integer keys and string values
    std::map<int, string> student = { {1,"Jacqueline"}, {2,"Blake"}, {3,"Denise"} };

    // Create a map of strings to integers
    std::map<std::string, int> map;

    // We can use the [] operator to insert key-value pairs to a map. map_name[key] = value;
    map["one"] = 1;
    map["two"] = 2;
    map["three"] = 3;

    // Get an iterator pointing to the first element in the map
    std::map<std::string, int>::iterator it = map.begin();

    // Iterate through the map and print the elements
    while (it != map.end())
    {
    std::cout << "Key: " << it -> first << ", Value: " << it -> second << std::endl;
    ++it;
    }

return 0;
}

/*
Some basic functions associated with Map: 

begin() – Returns an iterator to the first element in the map.
end()   – Returns an iterator to the theoretical element that follows the last element in the map.
size()  – Returns the number of elements in the map.
max_size()  – Returns the maximum number of elements that the map can hold.
empty()     – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.

map upper_bound()	Returns an iterator to the first element that is equivalent to mapped value with key-value ‘g’ or definitely will go after the element with key-value ‘g’ in the map
map lower_bound()	Returns an iterator to the first element that is equivalent to the mapped value with key-value ‘g’ or definitely will not go before the element with key-value ‘g’ in the map –> O(log n)
*/
