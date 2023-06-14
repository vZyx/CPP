#include<iostream>
using namespace std;


// Defining and initializing a function
void Welcome(){
    cout<<"Hello world!"<<endl;
}

//  Defining here
void later();

int main(){

    Welcome();
    later();
    Welcome();

    return 0;
}

//initializing later
void later(){
    cout<<"Got executed later!"<<endl;
}