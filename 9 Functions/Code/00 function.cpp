#include<iostream>
using namespace std;


// defining and initializing a function
void Welcome(){
    cout<<"Hello world!"<<endl;
}

// Onyl defining
void later();

int main(){

    Welcome();
    later();
    Welcome();

    return 0;
}

void later(){
    cout<<"Got executed later!"<<endl;
}