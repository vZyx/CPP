#include <iostream>
using namespace std;
int main() {
    int  x   { 5 }; // normal integer variable
    int& ref { x }; // ref is now an alias for variable x

    cout << x << ref << '\n'; // print 5 5

    x = 6; // x now has value 6

    cout << x << ref << '\n'; // prints 66

    ref = 7; // the object being referenced (x) now has value 7

    cout << x << ref << '\n'; // prints 7 7

    return 0;
}