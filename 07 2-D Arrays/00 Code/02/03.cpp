#include<iostream>
using namespace std;

// Some code fixes

int main() {
	double grades[4][4] = {0};
	// taking the grades
	for(int row=0; row<4; ++row){
		for (int col=0; col<4; ++col)
			cin >> grades[row][col];
	}
	
	// summing the grades
	for (int row=0; row<4; ++row){
		double sum = 0;
		for (int col=0; col<4; ++col)
			sum += grades[row][col];
	
	

		double avg = sum / 4.0;

		cout << "Student # " << row + 1
		<< " has average grade: " << avg << "\n";	
	}
	
	return 0;
}


