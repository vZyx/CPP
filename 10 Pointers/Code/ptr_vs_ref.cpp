#include <iostream> 
using namespace std;

int main (){

	int *p1, *p2;
    p1 = new int; // dynamic variable 
    *p1 = 42;
    p2 = p1;
    cout << "*p1 == " << *p1 << endl;
    cout << "*p2 == " << *p2 << endl<< endl;

	*p2 = 53;
	cout << "*p1 == " << *p1 << endl; // 53
    cout << "*p2 == " << *p2 << endl; // 53

	
	return 0; 
} 