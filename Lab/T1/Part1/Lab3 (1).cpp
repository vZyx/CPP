
#include <iostream>
using namespace std;
int main(){
	double age, weight, tall, calories;
	string gender;

	cout<< "Enter in order: age, weight, tall \n";
	cin>> age>> weight>> tall;
	cout<< "Enter your gender: (male or female) \n";
	cin>>gender;

	if(gender == "male")
	calories= 6.25 * tall + 10 *weight -age * 5 + 5;

	else if(gender=="female")
	calories= 6.25 * tall + 10 *weight -age * 5 - 161;

	cout<<"Number of calories= "<< calories<<'\n';

	cout<< 5/2;
	return 0;
}