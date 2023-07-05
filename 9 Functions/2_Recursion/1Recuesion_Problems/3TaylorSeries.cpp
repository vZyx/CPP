#include <bits/stdc++.h>
using namespace std;

// Recursive Function with static variables p and f
double e(int x, int n)
{
	static double p = 1, f = 1;
	double r;

	// Termination condition
	if (n == 0)
		return 1;

	// Recursive call
	r = e(x, n - 1);

	// Update the power of x
	p = p * x;

	// Factorial
	f = f * n;

	return (r + p / f);
}

int main()
{
	int x = 4, n = 15;
	cout<<"\n"<< e(x, n);

	return 0;
}

/*
Taylor Series Iterative approach

double e(int x, int n)
{
    double s=1;
    int i;
    double num=1;
    double den=1;

    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
return s;
}

*/