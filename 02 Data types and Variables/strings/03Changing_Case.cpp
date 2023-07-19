#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
/*
a   97  z	122    
A	65  Z	90
difference is 32
*/
int main()
{

    char s[10] = {"welcome"}; // s = {'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0};
    char ch;
    int i;

    // Iterate over each character in the string until the null terminator is reached
    for (i = 0; s[i] != '\0'; i++)
    {   
        if (s[i] >= 'A' && s[i] <= 'Z')// Check if the character is uppercase (upper case range)
        {
            s[i] = s[i] + 32;          // Add 32 to the ASCII code to convert it to lowercase (+32 make it lower)
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;          // Subtract 32 from the ASCII code to convert it to uppercase
        }
    }

    cout << s << endl;



    for (i = 0; s[i] != '\0'; i++)
    {
        ch = toupper(s[i]);
        cout << ch;
    }
    

}





