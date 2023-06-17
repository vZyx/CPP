#include<iostream>
using namespace std;

int main(){
	double baseSalary, totalSales, commissionRate, pay;

	cout<<"\n Please enter the base salary : ";
	cin>> baseSalary;

	cout<<"\n Please enter the total sales: ";
	cin>> totalSales;

	cout<<"\n Please enter the commission rate: ";
	cin>> commissionRate;

	pay = baseSalary + ( totalSales * commissionRate) ;
	cout<<"\n The salespersons pay = "<< pay;

	return 0;
}