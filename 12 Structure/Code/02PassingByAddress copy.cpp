#include<iostream>
using namespace std;
// PASS BY ADDRESS
struct Rectangle
{
    int width;
    int breadth;
};

// 
void changeLength(struct Rectangle *r1, int NL)
{
    p->length = NL; // assigning the new length
}

int main(){


    struct Rectangle r1 = {10, 5};

    // passing the whole stucture by address and pass the new length
    cout << changeLength(&r, 30) << endl;



    return 0;
}