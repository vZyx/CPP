#include<iostream>
using namespace std;

int main(){
// Creating a References
//A reference variable is a "Reference" to an existing variable, and it is created with the & operator:

    string food = "Pizza";  // food variable

    string& favMeal = food; // reference to --> food

//Now, we can use either the variable name (food) or the reference name (favMeal) to refer to the food variable:
    cout << food << endl;
    cout << favMeal << endl;
// Check 0.png

    // Address
    cout << &food << " food Variable's location"<<endl;//Variable location Outputs 0x61fef0
    cout << favMeal;     //Reference location Outputs Pizza

    //Note: The memory address is in hexadecimal form (0x..). Note that you may not get the same result in your program.

// Check 00.png to know why is it useful to know the memory address
// manipulate the data in the computer's memory - which can reduce the code and improve the performance.

    return 0;
}