#include<iostream>
using namespace std;

// PASS BY ADDRESS
struct test
{
    int Arr[5];
    int n;
};

void printArray(test &t) {
    for(int i = 0; i < 5; i++) {
        cout << t.Arr[i] << " ";
    }
    cout << endl;
}

void fun(struct test x)
{
    x.Arr[0] = 10; // assigning  new value
    x.Arr[1] = 9; // assigning  new value
    printArray(x);
}

int main(){

    test t = { {2,4,6,8,10}, 5};

    //before
    printArray(t);

    cout << "\n";

    //after
    fun(t);

    return 0;
}