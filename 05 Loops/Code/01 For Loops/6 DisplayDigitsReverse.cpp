# include<iostream>
using namespace std;
    
/*program for display digits of a number reverse

*/
int main()
{
	int n,r;//n= number r=remainder
	cout<<"enter the number: ";
	cin>>n;

	while(n>0){
		r=n%10; // last digit of a number
	    n=n/10; // remove last digit
		cout<<r<<endl;
	}
	return 0;
}