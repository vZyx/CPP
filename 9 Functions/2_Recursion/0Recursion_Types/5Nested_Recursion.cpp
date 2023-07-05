#include<bits/stdc++.h>

using namespace std;

/* Nested Recursion: In this recursion, a recursive function will pass the parameter as a recursive call.
That means “recursion inside recursion”. Let see the example to understand this recursion. */


int fun(int n)
{
	if (n > 100)
		return n - 10;

	// A recursive function passing parameter
	// as a recursive call or recursion inside
	// the recursion
	return fun(fun(n + 11));
}

// Driver code
int main()
{
	int r;
	r = fun(95);
	
	cout << r;
	
	return 0;
}




