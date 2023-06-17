// Homework 4: Print Program Output


#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	num1 = 0, num2 = 1, //num3 = 1
	num3 = num1 + num2, 
	cout <<num3<<"\n"; // 1


	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 1
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";//2
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; //3
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";

	// https://en.wikipedia.org/wiki/Fibonacci_number


	return 0;
}

