#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

// call by address function
void SInitialize(struct Rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}
// call by address function
void changeLength(struct Rectangle *r, int l)
{
    r->length=l;
}

// call by value. so it will have its own copy and will delete it later
int area(struct Rectangle r)
{ 
    return r.length * r.breadth;
}

void printStruct(Rectangle *r)
{
    cout << r->length << " ";
    cout << r->breadth << endl;
}


int main(){
    //creating a rectangle variable
    struct Rectangle r;
    //initializing the rectangle with length and breadth
    SInitialize(&r, 10, 5);
    //Printing the values the length and breadth values
    printStruct(&r);


    //calculating the area of the rectangle. Pass by value
    cout<< "Area is: " << area(r) << endl;
    // changing length of the rectangle
    changeLength(&r, 20);
    //Printing the values the length and breadth values
    printStruct(&r);


    return 0;
}