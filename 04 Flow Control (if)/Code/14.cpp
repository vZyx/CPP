
#include <iostream>
using namespace std;

int main(){
    int number1, number2;
    char op; //character

    cout<< "Enter the 2 numbers : ";
    cin>> number1>>number2;

	cout<< "Enter operation ( +, -, *, / ): ";
	cin>> op;

	if (op == '+')
	cout<< "The result: "<< number1 + number2;

	else if (op == '-')
	cout<< "The result: "<< number1 - number2;

	else if (op == '*')
	cout<< "The result: "<< number1 * number2;

	else if (op == '/')
	cout<< "The result: "<< number1 / number2;

	else
	cout<< "Entered wrong input! ";

	return 0;
}
