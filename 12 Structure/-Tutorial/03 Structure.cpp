#include <iostream>
using namespace std;

void SwapThemByValue(int num1, int num2) {  // Un-changed
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void SwapThemByReference (int& num1, int& num2) { // Changed
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

main() {

    int i = 10, j = 20;

    SwapThemByValue(i, j);
    cout << i << "  " << j << endl; // displays 10  20
    
    SwapThemByReference(i, j);
    cout << i << "  " << j << endl; // displays 20  10
                            
}

