#include <string>
#include <string.h>
#include <iostream>
using namespace std;

int main(){

    char *s[10] = {"Welcome"}; // s = {'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0};
    int i;
    for (i = 0; s[0][i] != '\0' ; i++)
    {

    }

    cout << "Length is: " << i << endl;


/*  The method string::length returns the length of the string, in terms of bytes.
    Both string::size and string::length are synonyms and return the exact same value. */
    string str = "Welcome"; 
    cout << "The length of the  string is: " << str.length() << ", And the size is: " << str.length() << endl;

    cout << strlen(str.c_str()) << endl;

    char a[] = "1234";
    int length = sizeof(a)/sizeof(char); // length=6
    cout << length << endl;

    return 0;
}