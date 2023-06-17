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