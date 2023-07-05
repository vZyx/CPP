// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int num;
    cout << "Enter a Natural number: ";
    cin  >> num;

	cout << num << "th Fibonacci Number: " << fib(num);
	return 0;
}
/*
memoization :A common observation is that this implementation does a lot of repeated work (see the following recursion tree).
So this will consume a lot of time for finding the N-th Fibonacci number if done.  

                            fib(5)   
                     /                 \        
               fib(4)                  fib(3)   
             /      \                /       \
         fib(3)      fib(2)         fib(2)    fib(1)
        /   \          /    \       /      \ 
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /    \ 
fib(1) fib(0) 

In the above tree fib(3), fib(2), fib(1), fib(0) all are called more than once.
*/


/*
Given a number n, print n-th Fibonacci Number. 

The Fibonacci numbers are the numbers in the following integer sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and etc...


Iterative Approach to Find and Print Nth Fibonacci Numbers:

int fib(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}



*/