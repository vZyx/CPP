#include<iostream>
using namespace std;

int main(){

    int *ptr; //declaring a pointer (pointing to noithng now)

    int var = 7; //declaring a variable

    int foo = 21; //declaring another variable

    ptr = &var; // 1.png

    ptr = &foo;// 2.png

    int &ref = var; //3.png

    return 0;
}