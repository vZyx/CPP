#include<iostream>
using namespace std;
// Print range (print the number between start and end)
int main() {
	int start, end;
	cout << "Enter a starting number and ending number" << endl; 
	cin>>start>>end;

	while(start <= end)
	{
		cout<<start<<"\n";
		start++;
	}

	return 0;
}

