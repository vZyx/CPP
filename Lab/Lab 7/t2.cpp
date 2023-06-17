#include<iostream>
using namespace std;

    int main(){


    char c = 'T', d = 'S';
    char *p1 = &c; //T (6940) 
    char *p2 = &d; // S (9772) 
    char *p3;

    p3 = &d; //(9772) S 
    cout << "*p3 = " << *p3 << endl; // (1) // S

    p3 = p1; // T (6940) 
    
    cout << "*p3 = " << *p3     // (2)//T 
    << ", p3 = " << p3 << endl; // (3)//6940 

    *p1 = *p2; //S(6940) 
    cout << "*p1 = " << *p1 // (4)//S 
    << ", p1 = " << p1 << endl; // (5)//6940



    return 0;
    
}