// Finding the maximum of three numbers
#include <iostream>
using namespace std;
main(){
    int a,b,c,max;
    cout<< "Enter three numbers:";
    cin>> a;
    cin>> b;
    cin>> c;
    max= a; //

    if (a>max)
    max=a;
    if (b>max)
    max=b;
    if (c>max)
    max=c;
    cout<<"Max is: "<<max;

    return 0;
}