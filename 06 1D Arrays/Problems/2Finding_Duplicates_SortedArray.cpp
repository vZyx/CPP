#include <bits/stdc++.h>
using namespace std;

// Function to print duplicate
void printduplicate(int arr[], int size)
{
for (int i = 0; i < size - 1; i++)
if (arr[i] == arr[i + 1])
cout << arr[i];
}
//Driver Code
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 5 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printduplicate(arr, arr_size);
return 0;
}