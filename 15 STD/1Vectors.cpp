// CPP program to illustrate Vectors in STL
#include <iostream>
#include <vector> // for vector
using namespace std;

/* 
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted,
with their storage being handled automatically by the container.

Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended.
Removing the last element takes only constant time because no resizing happens.
Inserting and erasing at the beginning or in the middle is linear in time.

Vectors are used to store elements of similar data types.
*/

    int main()
{
    vector<int> vec0 {10, 20, 30, 40}; // initializing
    
    vector<int> vec1;

    vec1.push_back(1);// {1}
    vec1.emplace_back(2);// {1, 2}

    //pairs
    vector<pair<int, int> > vec2;

    vec2.push_back({1, 2}); // doesn't consider them as pairs, thus we must use {}
    vec2.emplace_back(1, 2); // consider them as pairs

    //Another way of initialization
    vector<int> vec3(5, 100);// vec1 = {100, 100, 100, 100, 100}

    vector<int> vec4(5); // {0, 0, 0, 0, 0} garbage numbers

    vector<int> vec5(vec3); // takes a copy of vec3 {100, 100, 100, 100, 100}

    //Accessing vectors, We can do it like arrays and by using at()
    cout << "Vector 3: "<< vec3[1] << ", " << vec3.at(1) << "\n\n";

// Or by, Vector iterators are used to point to the memory address of a vector element. they act like pointers in C++.
//  (iter) is the iterator name
    vector<int>::iterator iter0 = vec0.begin(); // it points to the memory address
    iter0 ++;// points to the second element now which is 20 in vec0
    cout << "First element " << *(iter0) << " \n";
    
    vector<int>::iterator iter1 = vec0.end();//Returns an iterator pointing to the theoretical element that (after the last element in the vector)
    cout << "Last element  " <<*(iter1 - 1) << " \n";

    cout << "\nVector 6\n";
    vector<int> vec6 = {1, 3, 5, 7, 9};
    // use iterator with for loop
    for (vector<int>::iterator iter6 = vec6.begin(); iter6 != vec6.end(); iter6++) {
      cout  << *iter6 << "  ";
    }
    cout << "\n\n";
    // Another way by using auto iterator with for loop
    for (auto iter6 = vec6.begin(); iter6 != vec6.end(); iter6++) {
      cout << *iter6 << "  ";
    }
    cout << "\n\n";
    // Another way by using auto iterator with for loop
    for (auto iter6 : vec6) {
        cout << iter6 << "  ";
    }

    cout << "\nVector 7\n";
    //Deleting elements from a vector
    vector<int> vec7 = {2, 4, 5, 6, 8, 9, 11};
    vec7.erase(vec7.begin() + 2);// 5 is removed 

    vec7.erase(vec7.begin() + 5 , vec7.begin() + 6); // 9 and 11 are removed by selecting the range

    for (auto iter7 : vec7) {
        cout << iter7 << "  ";
    }    

    cout << "\nVector 8\n";
    // Inserting elements from vector
    vector<int> vec8(2, 100);// {100, 100}
    vec8.insert(vec8.begin(), 200);// {200, 100, 100}

    vec8.insert(vec8.begin() + 1, 99);// {200, 99 , 100, 100} adding 99 at index 1

    vec8.insert(vec8.begin() + 4, 2, 10);// two tens will be inserted at index 1 and 2

        for (auto iter8 : vec8) {
        cout << iter8 << "  ";
    }  

    return 0;
}



/*
The vector header file provides various functions that can be used to perform different operations on a vector.

• size()		Returns the number of elements present in the vector
• clear()		Removes all the elements of the vector

• front()		Returns the first element of the vector
• back()		Returns the last element of the vector

• empty()	    Returns 1 (true) if the vector is empty
• capacity()	check the overall size of a vector
• at( )       Access element at certain index


• push_back()    It push the elements into a vector from the back
• emplace_back() It is used to insert a new element into the vector container,the new element is added to the end of the vector
• pop_back()     Remove the last element 
• erase()        It is used to remove elements from a container from the specified position or range.

- Iterators -

• begin() – Returns an iterator pointing to the first element in the vector
• end() –   Returns an iterator pointing to the theoretical element that follows the last element in the vector -u

• rend() – //Returns a reverse iterator pointing to the theoretical element (before the first element) in the vector (considered as reverse end) -nu
• rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element -nu

• cbegin() – Returns a constant iterator pointing to the first element in the vector.
• cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
• crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
• crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

*/