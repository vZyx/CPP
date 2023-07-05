#include <bits/stdc++.h>
using namespace std;


// Returns sum of first
// n natural numbers
int recurSum(int n)
{
	if (n <= 1)
		return n;
	return recurSum(n - 1) + n;
}

int main()
{
    int num;
    cout << "Enter a Natural number: ";
    cin  >> num;

	cout << recurSum(num);
	return 0;
}
