#include <iostream>
using namespace std;

struct Emplyee {
	int *xPtr = nullptr;

	Emplyee() {
		xPtr =  new int[5]{ 1, 2, 3, 4, 5 };
	}

	~Emplyee() {	// destroctur
		cout<<"Bye\n";
		delete[] xPtr;
		xPtr = nullptr;
	}

	void print() {
		cout<<*xPtr<<" "<<xPtr<<" "<<&xPtr<<"\n";
	}
};

int main() {
	Emplyee e;
	e.print();
	// 1 0x13dbc20 0x7ffe28f16900
	// Bye

	return 0;
}
