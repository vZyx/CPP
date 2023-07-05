#include <bits/stdc++.h>
using namespace std;

// Recursive Function Taylor Series Horner’s Rule

double e(int x, int n)
{
    static double s;
    if(n==0)
    {
        return s;
    }
    s=1+x*s/n;
    return e(x,n-1);
}

int main()
{
	int x = 2, n = 10;
	cout<< "\n" << e(x, n);

	return 0;
}

