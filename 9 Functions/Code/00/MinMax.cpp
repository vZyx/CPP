#include <bits/stdc++.h>
using namespace std;


int main(){

    int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);

    int maximum = max(num1, num2);

    cout << minimum << " " << maximum << endl;


    return 0;
}