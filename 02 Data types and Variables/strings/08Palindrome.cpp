#include <bits/stdc++.h>
using namespace std;

int main()
{


    char B[] = "anna";
    char t;
    bool palindrome = true;
    int i, j;
    cout << "String \"" << B << "\" is ";

    for (j = 0; B[j] != '\0'; j++) {
        // no code here
    }

    j = j - 1;

    for (i = 0; i < j; i++, j--) {
        if (B[i] != B[j]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "palindrome" << endl;
    else
        cout << "not palindrome" << endl;

    return 0;
}

