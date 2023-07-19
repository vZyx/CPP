#include <iostream>
using namespace std;

// Insert n into arr at the next open position. 
// Length is the number of 'real' values in arr, and capacity is the size (aka memory allocated for the fixed size array).
void insertEnd(int arr[], int n, int length, int capacity) {
    if (length < capacity) {
        arr[length] = n;
    }
}

// Remove from the last position in the array if the array is not empty (i.e. length is non-zero).
void removeEnd(int arr[], int length) {
    if (length > 0) {
        arr[length - 1] = 0;
    }
}

// Insert n into index i after shifting elements to the right.  Assuming i is a valid index and arr is not full.
void insertMiddle(int arr[], int i, int n, int length) {
    for (int index = length - 1; index >= i; index--) {
        arr[index + 1] = arr[index];
    }   
    arr[i] = n;
}

// Remove value at index i before shifting elements to the left.  Assuming i is a valid index.
void removeMiddle(int arr[], int i, int length) {
    for (int index = i + 1; index < length; index++) {
        arr[index - 1] = arr[index];
    }
}

void printArr(int arr[], int capacity) {
    for (int i = 0; i < capacity; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(array1) / sizeof(array1[0]); // Calculate array size

    // Print the original array
    printArr(array1, size); // Output: 1 2 3 4 5 6 7 8

    // Insert 9 at the end of the array
    insertEnd(array1, 9, size, size);
    printArr(array1, size); // Output: 1 2 3 4 5 6 7 8 9

    // Remove the last element from the array
    removeEnd(array1, size);
    printArr(array1, size); // Output: 1 2 3 4 5 6 7 8

    // Insert 10 at index 2 of the array
    insertMiddle(array1, 2, 10, size);
    printArr(array1, size); // Output: 1 2 (10) 3 4 5 6 7 8

    // Remove the element at index 4 of the array
    removeMiddle(array1, 4, size);
    printArr(array1, size); // Output: 1 2 10 3 5 6 7 8

    return 0;
}
