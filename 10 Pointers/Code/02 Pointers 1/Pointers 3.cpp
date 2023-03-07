#include<iostream>
using namespace std;

int main(){
/*
    A pointer is a variable that stores the memory address as its value.
    Sometimes it's easier to work with an address.

    & Address-of operator
    * deRefreference operator (Dereference: Output the value of the pointer)
*/
    //variabels
    string name = "Ziyad";
    int    age = 20;
    string pizzas[5] ={"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"}; //arrays have addresses already allocated


    // declaring and initializing pointers
    string* pName = &name; //point pName to name
    int*    pAge   = &age;//point pAge to age

    // name
    cout << &pName<<"\n"; // Output the memory address of name with the pointer(0x61fc58) (not derefreferencing pointer)
    cout << *pName<<"\n"; // Ziyad (derefreferencing a pointer)
    // age
    cout << *pAge<<"\n"; // 20 (derefreferencing a pointer)

    // pizza array
    cout << *pizzas;


    return 0;
}