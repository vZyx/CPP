// C++ program to demonstrate the
// use of an array within a structure
#include <iostream>
using namespace std;

// Declaration of the structure candidate
struct candidate {
	int roll_no;
	char grade;

	// ***Array within the structure***
	float marks[4];
};

// Function to displays the content of
// the structure variables
void display(candidate a1){

	cout << "Roll number : " << a1.roll_no << endl;
	cout <<"Grade : " << a1.grade << endl;
	cout << "Marks secured:\n";
	int i;
	int len = sizeof(a1.marks) / sizeof(float);
	// Accessing the contents of the
	// array within the structure
	for (i = 0; i < len; i++){
		cout << "Subject " << i + 1 << " : " << a1.marks[i] << endl;
	}
}

int main(){
	// Initialize a structure
	struct candidate A = { 1, 'A', { 98.5, 77, 89, 78.5 } };
	// Function to display structure
	display(A);
	return 0;
}

