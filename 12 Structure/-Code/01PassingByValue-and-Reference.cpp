#include<iostream>
using namespace std;

// PASS BY VALUE AND REFERENCE
struct Rectangle
{
    int width;
    int breadth;
};

// this is pass by value. if you want to pass by reference, write &r1
int area(struct Rectangle x)
{
    return x.width * x.breadth;
}

int main(){

    struct Rectangle r1 = {10, 5};
    
    // passing the whole stucture
    cout << area(r1) << endl;


    return 0;
}