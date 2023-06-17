#include <iostream>
using namespace std;
using std::cout;
using std::endl;

// Insert n into arr at the next open position.
// Length is the number of 'real' values in arr, and Capacity is the size (aka memory allocated for the fixed size array).
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

// Insert n into index i after shifting elements to the right.
// Assuming i is a valid index and arr is not full.
void insertMiddle(int arr[], int i, int n, int length) {
    for (int index = length - 1; index >= i; index--) {
        arr[index + 1] = arr[index];
    }   
    arr[i] = n;
}
// Remove value at index i before shifting elements to the left.
// Assuming i is a valid index.
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
    
    const int capacity = 15;
    int arr[capacity] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << "Printing our Array" << endl;
    printArr(arr, 9);

    // Add a new element (10) to the end of the array and update the length
    cout << "\nAdding 10 to last element in the array \n" << endl;
    int newElement = 10;// adding this element
    insertEnd(arr, newElement, 9, capacity);
    // Print the updated array
    printArr(arr, 10);

    //remove the last element. 10 in this case will be deleted
    cout << "\nRemoving the last element that was added 10" << endl;
    removeEnd(arr, 10);
    printArr(arr, 9);

    //remove a specific index given the length(aka number of real elements)
    cout << "\nRemoving number 5 at index 4" << endl;
    removeMiddle(arr, 4, 9);
    printArr(arr, 9);

    //inserting an element to the array given the index, new element, the length(aka number of real elements)
    cout << "\nInserting number 5 at index 4 back again" << endl;
    insertMiddle(arr, 4, 5, 9);
    printArr(arr, 9);

    return 0;
}
