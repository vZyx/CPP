#include <iostream>
using namespace std;

struct Emplyee {
	int *xPtr = nullptr;

	Emplyee() {
		xPtr =  new int[5]{ 1, 2, 3, 4, 5 };
	}

	~Emplyee() {
		delete[] xPtr;
		xPtr = nullptr;
	}

	void print() {
		cout<<*xPtr<<" "<<xPtr<<" "<<&xPtr<<"\n";
	}

	// For now: Add these 2 lines when you have internal pointers
	// They will inform you about soon problems
	// Later in OOP: Full understanding and proper treatment
	Emplyee(const Emplyee& e) = delete;
	void operator = (const Emplyee& e) = delete;
};

int main() {
	Emplyee e1, e2;

	// NOW CE = saves us from our mistakes
	e2 = e1;
	Emplyee e3 = e1;

	return 0;
}
