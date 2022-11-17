
#include <iostream>
using namespace std;
int main(){
	double score1, score2, score3, avg;
	cout<<"Enter 3 scores separated by space: \n";
	cin>>score1>>score2>>score3;
	avg=(score1+score2+score3)/3;

	if(avg>=90)
	cout<<"Grade A";

	else if(avg>=70)
	cout<<"Grade B";
	
	else if(avg>=50)
	cout<<"Grade C";

	else
	cout<<"Grade F";

	return 0;
}