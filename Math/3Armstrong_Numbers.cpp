#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    
    originalNum = num;

    while (originalNum != 0) {

        remainder = originalNum % 10;// remainder contains the last digit
        
        result += remainder * remainder * remainder;
        
        originalNum /= 10;// removing last digit from the orignal number
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}