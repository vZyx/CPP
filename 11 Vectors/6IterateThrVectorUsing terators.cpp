#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> num {1, 2, 3, 4, 5};
    // declare iterator
    vector<int>::iterator itr;

    // use iterator with for loop
    for (itr = num.begin(); itr != num.end(); ++itr) {
      cout << *itr << "  ";
    }
    /*we have used a for loop to initialize and iterate the iterator iter from the beginning of the vector
    to the end of the vector using the begin() and end() functions

    another way,
    for (int i=0; i < num.size(); i++ ){
      cout << num[i] << "  ";
    }
*/
    return 0;
}