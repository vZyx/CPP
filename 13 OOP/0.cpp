#include<iostream>
using namespace std;
/*
OOP stands for Object-Oriented Programming.
Object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:
• OOP is faster and easier to execute
• OOP provides a clear structure for the programs
• OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
• OOP makes it possible to create full reusable applications with less code and shorter development time

Tip:The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code.
    You should extract out the codes that are common for the application, and place them at a single place and reuse them instead of repeating it.
*/

/*
Everything in C++ is associated with classes and objects, along with its attributes and methods.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
*/

/


class Rectangle { 
private:
    float width;    //attribute
    float length;   //attribute
public:
    void set_width(float w) {   //Method
        if (w >= 0) 
        width = w;
        else
            cout<<"Width must be greater than 0"<<endl;
    }

    float get_width() { //Method (setter)
        return width;}

    void set_length(float l) {  //Method (setter)
        if (l >= 0) 
        length = l;
        else
        cout<<"Length must be greater than 0"<<endl;
    }

    float get_length() {    //Method (getter)
        return length;}

    float get_area() {  //Method (getter)
        return width * length;}

};
int main(){
    // initializing  a object of Rectangle class
    Rectangle box1;
    box1.set_width(5);
//  box1.width = 50; can't do this as it is private
    box1.set_length(5)
    cout<<"The Rectangle area is " << box1.get_area() << "\n"; // Void method

    return 0;
}