#include <iostream>
#include <vector>
using namespace std;

/*  Vector iterators are used to point to the memory address of a vector element.    
    We can initialize vector iterators using the begin() and end() functions.

    The begin() function returns an iterator that points to the first element of the vector.

    The end() function points to the theoretical element that comes after the final element of the vector.
    due to the nature of the end() function, we have used the code num.end() - 1 to point to the last element of the num vector i.e.
*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num {1, 2, 3, 4, 5};

    // declare iterator
    vector<int>::iterator iter;

    // initialize the iterator with the first element
    iter = num.begin();

    // print the vector element
    cout << "num[0] = " << *iter << endl;

    // iterator points to the 3rd element
    iter = num.begin() + 2;
    cout << "num[2] = " << *iter << endl;

    // iterator points to the last element
    iter = num.end() - 1;
    cout << "num[4] = " << *iter;

    return 0;
}