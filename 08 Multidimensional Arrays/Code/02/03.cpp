#include<iostream>
using namespace std;

// Some code fixes

int main() {
	double grades[7][4] = { 0 };

	for (int row = 0; row < 7; ++row)
		for (int col = 0; col < 4; ++col)
			cin >> grades[row][col];

	for (int col = 0; col < 4; ++col) {
		double sum = 0;
		for (int row = 0; row < 7; ++row)
			sum += grades[row][col];

		double avg = sum / 7.0;

		cout << "Student # " << row + 1
			 << " has average grade: " << avg << "\n";
	}
	return 0;
}

