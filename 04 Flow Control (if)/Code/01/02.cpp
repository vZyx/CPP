#include<iostream>
using namespace std;

int main() {
	int num;
	cin>>num;

	if (num == 10) // use {} if you want to do more logic inside a scope.
	               // Note: what inside the {} not visible outside it
	{
		int x = 3;
		cout<<"10 is lucky number\n";
		cout<<"also "<<2*num + x<<"\n";
	}

	//cout<<x;	# not visible here! only visible inside the scope

	return 0;
}

