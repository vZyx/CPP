
#include <iostream>
using namespace std;
int main(){
	int temp,tempConverted;
	char unit;

	cout<<"Please enter the temperature and measurement system (c or f):"<<endl;
	cin >> temp;
	cin >> unit;

	if(unit == 'f' || unit == 'F') { //Celsius
		temp = (temp - 32) / 9.0 * 5.0;
		cout<<temp << " degrees Celsius"<<endl;
	}
	else if(unit == 'c' || unit == 'C') { //Fahrenheit	
	}
	else{
		cout<<"Sorry that unit of measure isn't recognized.\n"<<endl;
		return 0;
	}





	return 0;
}