// Finding the maximum of three numbers
#include <iostream>
using namespace std;

int main(){
    int number1, number2;
    char op; //character

    cout<< "Enter the first number: \n";
    cin>> number1;

    cout<< "Enter the second number: \n";
    cin>> number2;

cout<< "Enter operation ( +, -, *, / ): \n";
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
