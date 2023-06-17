#include<iostream>
using namespace std;

class Rectangle
{
private:

    int length;
    int breadth;

public:
Rectangle(int l, int b) // default constructor. Initializing the members
{
        length  = l;
        breadth = b;
}

void changeLength(int l)
{
    length=l;
}


int area()
{ 
    return length * breadth;
}

void printClass()
{
    cout << length << " ";
    cout << breadth << endl;
}




};

int main(){
    //creating a rectangle object (r)
    struct Rectangle r(10, 5);
    
//initializing the rectangle with length and breadth
// XX r.SInitialize(10, 5);

    //print the width and breadth
    r.printClass();
    //calculating the area of the rectangle. Pass by value
    cout<< "Area is: " << r.area() << endl;
    // changing length of the rectangle
    r.changeLength(20);
    //print the width and breadth
    r.printClass();



    return 0;
}