#include <bits/stdc++.h>
using namespace std;

int sum(int n1, int n2){
    int n3 = n1 + n2;
    return n3;
}

int main(){

    int num1, num2;
    cin >> num1 >> num2;

    cout << sum(num1, num2) << endl;

    int result = sum(num1, num2);
    cout << result << endl;


    return 0;
}