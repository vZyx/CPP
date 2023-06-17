#include <iostream>
using namespace std;


int main(){


    int *p;
    cout << p << endl;

    p = new int[5];
    cout << p << endl;

    //delete pointer (Free the memory) removed from heap
    delete[] p;
    cout << p << endl;

    //Set the pointer to null. Makes is Zero 0
    p = nullptr;
    cout << p << endl;


    return 0;
}