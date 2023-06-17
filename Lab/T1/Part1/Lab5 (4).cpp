// booking seat(s) in a stadium
#include<iostream>
using namespace std;
int main() {
	int ID,NumberOfSeats;
    float Age, price, Total;
    char Class;	
	cout<<"Pleas enter your ID and Age....";
	cin>>ID;
	cin>>Age;
	if (Age>=18) {
     	cout<<"Pleas choose the class type(A,B,C,D): "; // A B C
     	cin>>Class;
		 if ( Class=='A' || Class=='a' )
         	price=100;
     	else if (Class=='B' || Class=='b')
     	   price=75;
     	else if (Class=='C' || Class=='c')
     	   price=50;
           
     	cout<<"Pleas enter the number of seats: ";
     	cin>>NumberOfSeats;

     	Total= price*   NumberOfSeats;
     	cout<<"The total cost is: "<<Total<<"$";
	 }

    else // less than 18
       cout<<"Sorry, you are not allowed to book a set";

       return 0;	  
}
