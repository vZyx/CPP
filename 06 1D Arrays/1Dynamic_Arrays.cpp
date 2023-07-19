#include <iostream>
#include <math.h>

using namespace std;

// Example implementation of a resizable array (i.e. a vector).
class Array {
public:
    int capacity = 2;
    int length = 0;
    int *arr = new int[2]; // Array of capacity = 2

    Array(){};

    // Insert n in the last position of the array
    void pushback(int n)
    {
        if (length == capacity)
        {
            resize();
        }
        // insert at next empty position
        arr[length++] = n;
    }

    void resize()
    {
        // Create new array of double capacity
        capacity = 2 * capacity;
        int *newArr = new int[capacity];

        // Copy elements to newArr
        for (int i = 0; i < length; i++)
        {
            newArr[i] = arr[i];
        }
        arr = newArr;
        // Normally we would use smart pointers or free the old arr's memory
    }

    // Remove the last element in the array
    void popback() {
        if (length > 0) {
            length--;
        }
    }

    // Get value at i-th index
    int get(int i) {
        if (i < length) {
            return arr[i];
        }
        // Here we would throw an out of bounds exception
    }

    // Insert n at i-th index
    void insert(int i, int n) {
        if (i < length) {
            arr[i] = n;
            return;
        }
// Here we would throw an out of bounds exception
    }

    void print() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
};

int main() {
    // Create an instance of the Array class
    Array myArray;

    // Insert some elements
    myArray.pushback(1);
    myArray.pushback(2);
    myArray.pushback(3);
    myArray.pushback(4);

    // Print the array
    myArray.print(); // Output: 1 2 3 4

    // Remove the last element
    myArray.popback();

    // Print the array again
    myArray.print(); // Output: 1 2 3

    // Get value at the 2nd index
    int value = myArray.get(2);
    cout << "Value at index 2: " << value << endl; // Output: Value at index 2: 3

    // Insert a new value at the 1st index
    myArray.insert(1, 5);

    // Print the array again
    myArray.print(); // Output: 1 5 3

    return 0;
}