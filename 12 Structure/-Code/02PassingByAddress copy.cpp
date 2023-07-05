#include<iostream>
using namespace std;

// PASS BY ADDRESS
struct Rectangle
{
    int width;
    int breadth;
};

int area(struct Rectangle x)
{
    return x.width * x.breadth;
}

void changebreadth(Rectangle *x, int new_breadth)
{
    x->breadth = new_breadth; // assigning the new breadth as breadth was not defined in rectangle struct
}

int main()
{
    Rectangle r1 = {10, 5};

    // passing the whole structure by address and passing the new length
    changebreadth(&r1, 10);

    cout << area(r1) << endl;

    return 0;
}