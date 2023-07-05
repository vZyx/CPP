// C++ program to demonstrate the use of a pointer to a structure
#include <bits/stdc++.h>
using namespace std;

    struct rectangle
    {
        int length;
        int breadth;
    };
    

int main(){

    rectangle r1 = {10, 5};
    
    rectangle *p = &r1; // in stack

    // accessing the struct using the pointer (p)

    (*p).breadth = 10; // now both length and breadth are equal to 10
    // or
    p->length = 10;    // another way to access the struct using pointer
    

    cout << r1.length << " " << r1.breadth << endl;
}
