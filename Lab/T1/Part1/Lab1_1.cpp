// Finding the maximum of three numbers
#include <iostream>
using namespace std;

main(){
    char ch;
    cout<<"Enter any character:";
    cin>>ch;

    if (ch>=65 && ch<=90) //Capital
    cout<<"Character is a capital letter";

    else if (ch>=97 && ch<=122) // Small
    cout<<"Character is a small letter";

    else if (ch>=48 && ch<=57)// One digit
    cout<<"Character is a digit";

    else if ((ch>0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))// Special symbols
    cout<<"Character is a special symbol";

    return 0;
}
