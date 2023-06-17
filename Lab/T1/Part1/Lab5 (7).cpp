// Task#2: Write a C++ program to display Multiplication table up to 10

// Display Multiplication table
#include <iostream>
using namespace std;int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}

