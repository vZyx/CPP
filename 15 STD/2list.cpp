// CPP program to illustrate list in STL
#include <iostream>
#include<list> // for list
using namespace std;
/*
Lists are sequence containers that allow non-contiguous(random) memory allocation.
As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time).
To maintain sequential ordering, every list element includes two links:

• One that points to the previous element
• Another that points to the next element

Normally, when we say a List, we talk about a doubly linked list. As a result, we can iterate both forward and backward.
For implementing a singly linked list, we use a forward_list.

*/

    int main(){

    list<int> ls1 = {2, 3, 4};
    // display the list
    cout << "Initial List: ";
    for(int number: ls1) {
        cout << number << ", ";
    }
    //Add Elements to a List

    ls1.push_front(1);// Inserts an element to the beginning of the list

    ls1.push_back(5);// Adds an element to the end of the list

    //Display the list
    cout << "\nAfter the insertion: ";
    for(int number: ls1) {
        cout << number << ", ";
    }

    //Delete List Elements

    // remove the first element of the list
    ls1.pop_front();

    // remove the last element of the list
    ls1.pop_back();

    cout << "\nAfter the deletion: ";
    for(int number: ls1) {
        cout << number << ", ";
    }


        return 0;
    }

/*
push_front() - Inserts an element to the beginning of the list
push_back()  - Adds an element to the end of the list

front() - returns the first element of the list
back()  - returns the last element of the list

pop_front() - removes the element at the beginning of the list
pop_back()  - removes the element at the end of the list

*/