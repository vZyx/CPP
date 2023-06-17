#include<iostream>
using namespace std;
// PASS BY VALUE AND REFERENCE
struct Rectangle
{
    int width;
    int breadth;
};

// this is pass by value. if you want to pass by reference, write &r1
int area(struct Rectangle r1)
{
    return r1.width * r1.breadth;
}

int main(){

    struct Rectangle r1 = {10, 5};
    // passing the whole stucture
    cout << area(r) << endl;


    return 0;
}