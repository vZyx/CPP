#include<iostream>
using namespace std;

    void update1(int*x,int *y);
    void update2(int &x,int &y);


    int main(){
    int x = 4, y = 7;

    update1(&x,&y); // pass by refrence with pointer
    cout<<"Updating Values 1 "<<" X="<< x<<" Y ="<<y << endl;

    update2(x,y);// passing by refence with refrence
    cout<<"Updating Values 2 "<<" X="<< x<<" Y ="<<y << endl;;
return 0;
}

void update1(int *x, int *y){
    *x=*x-10;
    *y=*y+50;
}
void update2(int &x, int &y){
    x*=2;
    y/=10;
}


/*  update variables using pointers

Write two functions update1 and update2 that has no return and shall update the value of two numbers x and y as following:
• update1 : subtracting 10 from x and adding 50 to y.
• update2: multiplying x by 2 and dividing y by 10.
Write those two functions in two diverse ways: once using & operator and once using * operator.
Then call both functions inside the main method and compare between the usage of both functions.

*/