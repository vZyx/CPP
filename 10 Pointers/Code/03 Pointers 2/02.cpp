#include <iostream>
#include <vector>
using namespace std;

int main() {

	double x = 10;
	double* ptr1 = &x;

	string str = "mostafa";
	string* ptr2 = &str;
	*ptr2 = "ali";
	cout << str << "\n";	// ali

	vector<int> v {5, 6, 7};
	vector<int> *ptr3 = &v;
	*ptr3 = vector<int> (10);
	cout<<v.size();	// 10
	// More next on arrays

	return 0;
}
