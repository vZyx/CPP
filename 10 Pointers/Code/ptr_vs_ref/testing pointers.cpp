#include<iostream>
using namespace std;

int main(){

    int v1=5, v2=15; //declaring a pointer (pointing to noithng now)

    int *p1, *p2; //declaring a variable
    
    p1 = &v1;
    p2 = &v2;

    *p1 = 10;
    *p2 = *p1;

    p1=p2;

    *p1= 20;

    cout<<"value1: "<<v1<<"\nvalue2: "<<v2<< "\np1: "<<p1<<"\np2: "<<p2<<endl;

        return 0;
}

