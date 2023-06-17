#include<iostream>
using namespace std;

int main() {
	string name1 { "ali" }, name2 { "ali mostafa" };
	string name3 {"ziad"}, name4 {"ali"}, name5 {"ALI"};

	cout<<(name1 < name2) <<"\n";//1
	cout<<(name1 > name3) <<"\n";// 0
	cout<<(name1 != name4) <<"\n";// 0
	cout<<(name1 == name4) <<"\n";// 1

		
	cout<<(name1 == name5) <<"\n";// 0
	cout<<(name1 > name5) <<"\n";//  1 
// A comes first therefore it is smaller than a
	return 0;
}

