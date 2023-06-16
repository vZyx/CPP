# include<iostream>
using namespace std;
/*program for finding armstrong number

*/
int main(){
	int n,r,sum=0,m; // n= number r=remainder m= chcker number
	cout<<">> Enter the number: ";
	cin>>n;
	m=n;

	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}

	if(sum==m)
		cout<<"\n its a armstrong number ";
	else
		cout<<"\n its not a armstrong number ";

	return 0;
}

