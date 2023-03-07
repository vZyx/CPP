#include <iostream>
using namespace std;

int main() {

	string str1 = "mostafa";
	string str2 = "mostafa";

	cout << (str1 == str2) << "\n";	// true

	string *p1 = &str1;
	string *p2 { &str2 };	// c++ style

	// BE CAREFUL: do u wanna compare addresses or values?
	cout << (p1 == p2) << "\n";		// false
	cout << (*p1 == *p2) << "\n";	// true

	return 0;
}
