#include <iostream>
using namespace std;

/*

Pass by reference, passes a reference to the original value of the parameter to the function.
Any changes made to the parameter within the function **affects the original value of the parameter outside the function.**

(Note: Arrays are always passed by reference)
*/

// passing by reference
void increment(int& x) {
    x += 10;
}




int main() {

    int num = 5;
    cout << "num: \n" << num << endl;

    increment(num);
    cout << "num after pass by reference: \n" << num;



    return 0;
}