#include<iostream>
using namespace std;

int main() {
	int a = 0, b = 1;

	cout<<a++<<"\n";  // print a (0) then add to it 1 ==> print a=0 than a=1 
	cout<<++a<<"\n";  // a=1 a+1=2 >> print a=2
	a += 2*b+1;       //a = a*2*b+1 >> a=5
	b = ++a * 2;     // a=6 b=12

	cout<<a<<" "<<b<<"\n";// 6 12
     	// a=6 b=12

	b = a; // b=6
	// a=6 b=6
	a = 12 + a / 3 / 2 - 2 * 2;
//          a = 9.5 >> 9
	cout<<a<<"\n";

	a = b; // a= 6
	a = ( (12 + a) / 3 / 2 - 2) * 2;
	// a = 2
	cout<<a<<"\n";

	return 0;
}

