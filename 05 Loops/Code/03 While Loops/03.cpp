#include<iostream>
using namespace std;

int main() {
	int x = 1;
	int sum = 0;
// SUN 1 TO 5= 1+2+3+4+5= 15 
	while (x < 6)
	{
		sum += x;
		++x;
	}
	cout<<sum;

	return 0;
}
