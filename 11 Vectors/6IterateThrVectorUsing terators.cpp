#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num {1, 2, 3, 4, 5};
    // declare iterator
    vector<int>::iterator iter;

    // use iterator with for loop
    for (iter = num.begin(); iter != num.end(); ++iter) {
      cout << *iter << "  ";
    }
    /*we have used a for loop to initialize and iterate the iterator iter from the beginning of the vector
    to the end of the vector using the begin() and end() functions*/
    return 0;
}