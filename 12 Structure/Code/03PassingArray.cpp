#include<iostream>
using namespace std;

// PASS BY ADDRESS
struct test
{
    int A[5];
    int n;
};

void printArray(test &t) {
    for(int i = 0; i < 5; i++) {
        cout << t.A[i] << " ";
    }
    cout << endl;
}

void fun(struct test t1)
{
    t1.A[0] = 10; // assigning  new value
    t1.A[1] = 9; // assigning  new value
    printArray(t1);
}

int main(){

    struct test t = {{2,4,6,8,10}, 5};
    //before
    printArray(t);
    cout<<endl;

    fun(t);
    //after


    return 0;
}