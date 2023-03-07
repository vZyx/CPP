#include<iostream>
using namespace std;

int main(){


    int x = 12;
    int *ptr;
    ptr = &x;
    cout << ptr << endl; //  adress of x
    cout << &ptr << endl;// adress of pointer
    cout << *ptr << endl;// value of x

    *ptr += 10; // value of x + 10
    
    cout << x << endl;// print value of x
    cout << *ptr << endl;// print value of pointer



    return 0;
}