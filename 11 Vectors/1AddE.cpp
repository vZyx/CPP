#include <iostream>
#include <vector>
using namespace std;
/*  To add a single element into a vector, we use the push_back() function.
    It inserts an element into the end of the vector.                           */
int main() {

    vector<int> num {1, 2, 3, 4, 5};    
    cout << "Initial Vector: "; 

    for (const int& i : num) {
    cout << i << "  ";
    }

    // add the integers 6 and 7 to the vector
    num.push_back(6);
    num.push_back(7);

    cout << "\nUpdated Vector: ";

    for (const int& i : num) {
    cout << i << "  ";
    }

    return 0;
}