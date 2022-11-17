// Finding the maximum of three numbers
#include <iostream>
using namespace std;

main(){

int noHours;
bool coop;
cout<< "Enter the number of credit hours you have finished: \n";
cin>> noHours;

cout<< "Enter (1) if you have taken the coop training, or (0) if you haven’t \n";
cin>> coop;

if ( (noHours >= 150) && (coop) )
cout<< "Congrats grad! ";
else
cout<< "You haven’t completed graduation requirements ";

    return 0;
}
