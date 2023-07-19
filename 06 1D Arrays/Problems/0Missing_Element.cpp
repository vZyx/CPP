#include <bits/stdc++.h>
using namespace std;

/*
You are given an array of integers of size N – 1 ranging from 1 to N.
There are no duplicates in the list. One of the integers is missing in the array.
The task is to find the missing number in the series.
*/

// Function to find the missing natural number in an array
// a: the input array
// size: the size of the array
int find_missing_natural(int a[], int size)
{
    if (size <= 0) {
        // Handle invalid input
        // Return -1 to indicate an error
        return -1;
    }

    // Calculate the sum of the elements in the array
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }

    // Calculate the expected sum of the range of numbers
    // from 1 to (n+1), which includes the missing number
    int N = size + 1;
    int expected_sum = (N) * (N + 1) / 2; 

    // Calculate the missing number by subtracting the
    // sum of the elements in the array from the expected sum
    int missing_number = expected_sum - sum;

    // Return the missing number
    return missing_number;
}

int main()
{
	int arr1[] = {1, 2, 4, 5, 6, 7 }; // is 3
	int size = sizeof(arr1) / sizeof(arr1[0]);
	
    // Function call
	int miss = find_missing_natural(arr1, size);
	cout << miss;

    return 0;

}
