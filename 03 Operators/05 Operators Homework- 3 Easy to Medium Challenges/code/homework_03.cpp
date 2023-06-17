#include<iostream>
using namespace std;

int main() {

	int a = 210; // a=210

	a /= 2; //  a=105

	cout<<a<<"\n"; // a=105

	cout<<(a /= 3)<<"\n"; // a=35
	cout<<(a /= 5)<<"\n";//  a=7
	cout<<(a /= 7)<<"\n";//  a=1

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";// 40/5/8 >> 8/8 >> 1

	a = 10; // a=10

	cout<<a++ + 10<<"\n"; // printed>>20>> a=11


	cout<<++a + 10<<"\n"; //11+1 +10 >> 22 >> a=12

	cout<<a-- + 10<<"\n"; //12+10=22 >> a=11

	cout<<--a + 10<<"\n"; //11-1+10>> 20

	int b = 20; //a=11 b=20

	cout<<a++ + ++b<<"\n";	//20+11=31>>> a=12,b=21 Don't code this way

	cout<<a<<"\n"; // a = 11

	++a += 10;	// Don't code this way
	
	cout<<a<<"\n"; // 22


	return 0;
}

