#include <vector>
#include <iostream>
using namespace std;

struct SpecialName {
	string name = "mostafa";
	string& get_name()  {		return name;	}
	void print() 		{		cout<<name<<"\n";	}
};

// NEVER do so. Temp will be destroyed
string& get_msg() {
	// warning: reference to local variable
	string tmp = "hello";
	return tmp;
}

int main() {
	SpecialName my_name;
	my_name.print();	//mostafa

	string &str = my_name.get_name();
	str = "ziad";
	my_name.print();	//ziad

	my_name.get_name() = "belal";
	my_name.print();	//belal

	return 0;
}
