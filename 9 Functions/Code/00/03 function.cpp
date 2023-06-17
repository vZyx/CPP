#include<iostream>
using namespace std;

/*Function to calculate m power n.
Main is calling a function pow(2,5) and you have to implement pow(nase,exp) function
function should return the result
*/

int pow(int base,int exp){
    int p=1;
    for(int i=0; i<exp; i++){
        p=base*p;
    }
    return p;
}

int main(){
    int n1, n2;
    cout<<"Enter the base and exponent: ";
    cin>>n1 >> n2;

    cout<<pow(n1,n2)<<endl;
    return 0;
}