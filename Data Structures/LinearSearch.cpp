// Linear Search in C++

#include <iostream>
using namespace std;

int LinearSearch(int array[], int n, int x) {
    //Going through array sequencially
    for (int i = 0; i < n; i++){
        if (array[i] == x)
        return i;
    }
    return -1;
}

int main() {

    int array[] = {2, 4, 0, 1, 9};
    int x = 9;// the desired  element
    int n = sizeof(array) / sizeof(array[0]);

    int result = LinearSearch(array, n, x);
    // if-else statment
    (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}