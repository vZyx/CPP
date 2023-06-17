#include<iostream>
using namespace std;

int main() {
	int x = 5;
	int sum = 0;
// SUN 5 TO 1= 5+4+3+2+1= 15 
	while (x >= 0)
	{
		sum += x;
		x--;
	}
	cout<<sum;

	return 0;
}
