#include<iostream>
using namespace std;

///Program for function to find the maximum of 3 numbers
int max(int a, int b, int c){
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
}


int main(){
    int a,b,c,d;
	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;
	d=max(a,b,c);
	cout<<"Maximum no is >> "<<d;
    return 0;
}