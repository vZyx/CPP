#include<iostream>
using namespace std;

int main() {
// Write a program that reads 2 numbers a, b and divides them (a/b), but prints only the fraction part
	cout << "Enter 2 numbers: ";

	double a, b;
	cin>>a>>b;// reads 2 numbers

	double result = a/b;

	cout<<result - (int)result;

	return 0;
}

