#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, remainder, dup, reversed_number = 0;

    cout << "Enter an integer: ";
    cin  >> n;

    dup = n;
    
    while(n != 0)
    {
        remainder = n % 10;
        reversed_number = (reversed_number * 10) + remainder;
        n /= 10;
    }
    if (dup == reversed_number){
    cout << "True";
    } else {
    cout << "False";
    }

    return 0;
}