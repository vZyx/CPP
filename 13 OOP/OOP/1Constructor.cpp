#include<iostream>
using namespace std;

// A constructor in C++ is a special method that is automatically called when an object of a class is created
// The constructor has the same name as the class, it is always public, and it does not have any return value.

class Rectangle { 

private: // Access specifier

    float width;    //attribute
    float length;   //attribute

public: // Access specifier

Rectangle() // Method (constructor)
    {
        width  = 1;
        length = 1;
    }

    void set_width(float w) { // Method
        if (w >= 0) 
        width = w;
        else
            cout<<"Width must be greater than 0"<<endl;
    }

    float get_width() { // Method (setter)
        return width;}

    void set_length(float l) { // Method(setter)
        if (l >= 0) 
        length = l;
        else
        cout<<"Length must be greater than 0"<<endl;
    }

    float get_length() { // Method (getter)
        return length;}

    float get_area() { // Method (getter)
        return width * length;}

};

int main(){

    Rectangle One; //Create an object of MyClass (this will call the constructor)

    cout<<"The length is "<< One.get_length() <<", and the width is "<< One.get_width() << endl;

    return 0;
}
