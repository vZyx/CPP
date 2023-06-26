
#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n){

	cout<<"The Divisors of " << n << " are:"<<endl;

	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";
	
	cout << "\n";
}


int main(){
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	printDivisors(n);

return 0;
}
