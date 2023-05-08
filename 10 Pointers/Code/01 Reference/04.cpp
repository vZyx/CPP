#include <vector>
#include <iostream>
using namespace std;

// Pass by value name
// Pass by reference x and str
void read(string name, int &x, string &str) {
	cout<<"Hello "<<name<<"\n";

	cin >> x >> str;
	name = "###";
}


int main() {
	string my_name = "mostafa";
	int x;
	string msg;

	read(my_name, x, msg);
	// read 10 wow

	cout<<my_name<<" "<<x<<" "<<msg<<"\n";
	// Hello mostafa
	// mostafa 10 wow
	// my_name won't change
	// x and msg will be updated

	return 0;
}
