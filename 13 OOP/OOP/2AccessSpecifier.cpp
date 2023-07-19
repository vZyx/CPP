#include<iostream>
using namespace std;

/*
Access specifiers define how the members (attributes and methods) of a class can be accessed.
In the example above, the members are public - which means that they can be accessed and modified from outside the code.

However, what if we want members to be private and hidden from the outside world?

In C++, there are three access specifiers:

• public - members are accessible from outside the class
• private - members cannot be accessed (or viewed) from outside the class
• protected - members cannot be accessed from outside the class; however, they can be accessed in inherited classes.

Here, we demonstrate the differences between public and private members:
*/

class MyClass {

    public:// Public access specifier
    int x;   // Public attribute

    private:// Private access specifier
    int y;   // Private attribute
};

int main() {
    MyClass Obj1;

    Obj1.x = 25;  // Allowed (public)

    Obj1.y = 50;  // Not allowed (private) Cause Error

    return 0;
}

/*
Note: It is possible to access Private Members of a class using a Public Method inside the same class by using  (Encapsulation).

Tip: It is considered good practice to declare your class Attributes as private (as often as you can).

This will reduce the possibility of yourself (or others) to mess up the code.

This is also the main ingredient of the Encapsulation concept.

Note: By default, all members of a class are private if you don't specify an access specifier:
/*