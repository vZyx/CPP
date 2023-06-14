#include <iostream>
using namespace std;
/*
    **Return Values**

The void function, indicates that the function should not return a value.

If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void.
In Value returning function, you can store the result in a variable or print it out. 
*/

int myFunction(int x) {
    return 5 + x;
}


int main() {

    int value = myFunction(3);

    cout << value << endl;



    return 0;
}