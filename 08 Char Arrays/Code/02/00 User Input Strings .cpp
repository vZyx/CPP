#include<iostream>
using namespace std;

int main(){
    // string firstName;
    // cout << "Type your first name: ";
    // cin >> firstName; // get user input from the keyboard
    // cout << "Your name is: " << firstName<<endl;
    // Type your first name: John
    // Your name is: Joh
/*cin considers a space (whitespace, tabs, etc) as a terminating character,
which means that it can only display a single word (even if you type many words): */
    // full name
    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John Doe

    return 0;
}
