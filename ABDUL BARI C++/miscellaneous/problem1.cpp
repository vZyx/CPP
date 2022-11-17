#include <iostream>
using namespace std;



//net salary calculator
int main() {
    //net salary = basic salary  + salary * percentage of allwonce - basic salary * percentage of deduction
    int netsalary,basicSalary,salary,PercentageAllowance,PercentageDeductions;

    cout<<"Enter Salary:";
    cin>>basicSalary;
    cout<<"Enter Percentage of allowance:";
    cin>>PercentageAllowance;
    cout<<"Enter Percentage of Deduction:";
    cin>>PercentageDeductions;

    netsalary = (basicSalary+basicSalary*PercentageAllowance/100) - (basicSalary* PercentageDeductions/100);
    cout<<"Netsalary is "<<netsalary<<endl;


}

