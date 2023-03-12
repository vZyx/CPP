#include <iostream>
#include <vector>
using namespace std;
/*  we use the index number to access the vector elements.
    Here, we use the at() function to access the element from the specified index.  */

int main() {
    vector<int> num {1, 2, 3, 4, 5};

    cout << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
    cout << "Element at Index 4: " << num.at(4);

    /*  cout << num[1];  // Output: 2 we could also use this*/
    return 0;
}