#include<iostream>
using namespace std;
/*  Information can be passed to functions as a parameter.
    Parameters act as variables inside the function.         */

float add(float n1, float n2){

    float z;
    z= n1 + n2;
    return z;
}


int main(){
    float x=2.3, y=7.9,z;

    z=add(x,y);
    cout<<z<<endl;

    return 0;
}
