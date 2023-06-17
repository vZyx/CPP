# include<iostream>
using namespace std;
    
/*program for reversing a number


*/
int main(){
	int n,r,rev=0;
	cout<<"enter the number: ";
	cin>>n;

	while(n>0){
		r=n%10; // Last digit
	    n=n/10; // Remove digit
		rev=rev*10+r;
	}
	cout<<"reverse number is : "<<rev;
	return 0;
}