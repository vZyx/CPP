#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 21;

	int i1 = a + b / 2;		// 20
	int i2 = (a + b) / 2;	// 15

	cout<<i1<<endl;
	cout<<i2<<endl;
	
	double x = 10.0;
	double y = 21;

	double d1 = x + y / 2.0;	// 20.5
	double d2 = (x + y) / 2.0;	// 15.5

	return 0;
}

