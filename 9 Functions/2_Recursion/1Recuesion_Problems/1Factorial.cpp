#include <bits/stdc++.h>
using namespace std;

//unsigned keyword is a data type specifier,that makes a variable only represent non-negative integer numbers(positive numbers and zero).
// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int num;
    cout << "Enter a Natural number: ";
    cin  >> num;

	cout << "Factorial of " << num << " is " << factorial(num) << endl;
	return 0;
}


/*
What is the factorial of a number?
Factorial of a non-negative integer is the multiplication of all positive integers smaller than or equal to n.
For example factorial of 5 is 5*4*3*2*1 which is 120. 

A factorial is represented by a number and a  ” ! ”  mark at the end.
It is widely used in permutations and combinations to calculate the total possible outcomes.

n! = n * (n – 1)!
n! = 1 if n = 0 or n = 1

*/