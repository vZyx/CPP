#include<iostream>
using namespace std;
/*Write a C program to input month number and print total number of days in month using
switch statement. Total days in a month is given by below table:
January, March, May, July, August, October, December 31 days    
February 28/29 days
April, June, September, November 31 days */
int main(){
    int month;
    // Input month number from user 
    cout<< "Enter month number(1-12): ";
    cin>> month;

    switch(month) {
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<< "31 days";
            break;

        case 2: 
            cout<< "28/29 days";
            break;
        case 4: 
        case 6:
        case 9: 
        case 11:
            cout<<"30 days";
            break;
        default: 
            cout<<"Invalid input! Please enter month number between 1-12";
    }
    return 0;
}
