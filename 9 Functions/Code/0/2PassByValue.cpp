#include <iostream>
using namespace std;

/*
Pass by value is the default way of passing parameters in most programming languages.
When a parameter is passed by value, a copy of the value is made and passed to the function.
Any changes made to the parameter within the function **do not affect the original value of the parameter outside the function.**
*/

// passing by value
void increment(int x) {
    x++;
}


int main() {

    int num = 5;
    cout << "num: \n" << num << endl;
    increment(num);
    cout << "num after pass by value: \n" << num;




    return 0;
}