#include <iostream>
using namespace std;

// Function to find multiple missing elements
void printMissingElements(int arr[], int size)
{

	// Initialize diff
	int diff = arr[0] - 0;

	for (int i = 0; i < size; i++) {

		// Check if diff and arr[i]-i  both are equal or not
		if (arr[i] - i != diff) {

			// Loop for consecutive missing elements
			while (diff < arr[i] - i) { 
				cout << i + diff << " ";
				diff++;
			}
		}
	}
}


void printMissingElements_Efficient(int A[], int size)
{
    // Initialize an array with zero of size equals to the maximum element in the array passed
    int b[A[size - 1] + 1] = { 0 };

    // Make b[i]=1 if i is present in the array
    for (int i = 0; i < size; i++) {
        // If the element is present make b[arr[i]]=1
        b[A[i]] = 1;
    }

    // Print the indices where b[i]=0
    for (int i = A[0]; i <= A[size - 1]; i++) {

        if (b[i] == 0) {
            cout << i << " ";
        }
    }
}


// Driver Code
int main()
{
	// Given array arr[]
	int arr[] = { 6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19 };

	int const size = sizeof(arr) / sizeof(int);

	// Function Call
	printMissingElements(arr, size);
    cout << endl;
    printMissingElements_Efficient(arr, size);
	return 0;
}



/*
Time Complexity: O(N2)
Naive Approach: The naive idea is to iterate over the difference between the consecutive pair of elements and the print all the numbers in this range if the difference is non-zero.

Below are the steps:

1. Initialize the variable diff which is equal to arr[0] – 0.
2. Now traverse the array and see if the difference between arr[i] – i and diff is zero or not.
3. If the difference is not equal to zero in the above steps, then the missing element is found.
4. To find the multiple missing elements run a loop inside it and see if the diff is less than arr[i] – i then print the missing element i.e., i + diff.
5. Now increment the diff as the difference is increased now.
6. Repeat from step 2 until all the missing numbers are not found.

Efficient Approach: The idea is to use Hashing to optimize the above approach.
Create a boolean array(say b[]) of size equal to the maximum element in the array and mark only those positions in the array b[] which are present in the given array.
Print all the index in the array b[] that are not marked. 

Below are the steps:  

1. Initialize a boolean array b[] with zero of size equals to the maximum element of the array.
2. Iterate over the given array and mark for each element in the given array mark that index as true in the array b[].
3. Now traverse the given array b[] from index arr[0] and print those index whose value is false as they are the element that is missing in the given array.

*/