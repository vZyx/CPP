#include<iostream>
using namespace std;

/*Function to calculate m power n.
Main is calling a function pow(2,5) and you have to implement pow(m,n) function
function should return the result
*/

int pow(int m,int n){
    int p=1;
    for(int i=0; i<n; i++){
        p=m*p;
    }
    return p;
}

int main(){
    cout<<pow(2,5);
    return 0;
}