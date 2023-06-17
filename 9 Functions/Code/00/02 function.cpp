#include<iostream>
using namespace std;

///Program for function to find the maximum of 3 numbers
int max(int n1, int n2, int n3){
	if(n1 > n2 && n1 > n3)
		return n1;
	else if(n2 > n3)
		return n2;
	else
		return n3;
}


int main(){
    int a,b,c, Maximum;

	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;

	Maximum= max(a,b,c);
	cout<<"Maximum no is = "<< Maximum;

    return 0;
}