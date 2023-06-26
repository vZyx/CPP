// C++ program to demonstrate default behaviour of
// sort() in STL

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
/*
It generally takes two parameters, the first one being the point of the array/vector from where the sorting needs to begin
And the second parameter being the length up to which we want the array/vector to get sorted.
The third parameter is optional and can be used in cases such as if we want to sort the elements lexicographically.

By default, the sort() function sorts the elements in ascending order.
*/
int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	/*Here we take two parameters, the beginning of the array and the length n upto which we want the array to be sorted */
	sort(arr, arr + n);

	cout << "\nArray after sorting using default sort is : \n";
	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";}


    //descending order? 
    sort(arr, arr + n, greater<int>());
    cout << "\nArray after sorting in a decreasing order : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;


    // Sort the elements which lies in the range of 2 to (n-1) 
    sort(arr + 2, arr + n);
    cout << "Array after sorting from 2 to (n-1) : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
	return 0;
}

/*
How to sort in descending order? 
sort() takes a third parameter that is used to specify the order in which elements are to be sorted.
We can pass the “greater()” function to sort in descending order.
This function does a comparison in a way that puts greater elements before.


How to sort in a particular order? 
We can also write our own comparator function and pass it as a third parameter.
This “comparator” function returns a value; convertible to bool, which basically tells us whether the passed “first” argument should
be placed before the passed “second” argument or not. 

For eg: In the code below, suppose intervals {6,8} and {1,9} are passed as arguments in the “compareInterval” function(comparator function).
Now as i1.first (=6) < i2.first (=1), so our function returns “false”,
which tells us that “first” argument should not be placed before “second” argument and so sorting will be done in order like {1,9} first and then {6,8} as next. 



*/