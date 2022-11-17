#include <iostream>
using namespace std;
#include <cmath>
#include <math.h>

int main (){  
    int u,v,a;
    float speed;
    cout<<"Enter 3 numbers"<<endl;
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"Speed is "<<speed<<endl;

 //write expression here, remove this comment
 
    return speed;
    
}