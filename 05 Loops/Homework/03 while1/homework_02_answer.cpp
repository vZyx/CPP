/*
 */

#include<iostream>
using namespace std;
//Line of chraachters
int main() {
	int num;
	char ch;
	cout <<"Enter the number of times and the Character"<<endl;
	cin>>num>>ch;

	while(num > 0)
	{
		cout<<ch;
		num-= 1;
	}

	return 0;
}

