#include <bits/stdc++.h>
using namespace std;


int ValidateString(char *B) {
    int i;
    for (i = 0; B[i] != '\0'; i++) {
        if (!((B[i] >= 65 && B[i] <= 90) || (B[i] >= 97 && B[i] <= 122) || (B[i] >= 48 && B[i] <= 57))) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char B[] = "Ani?321";
    int j;
    cout << "String is: " << B << endl;
        
    if (ValidateString(B)) {
        cout << "Valid String" << endl;
    } else {
        cout << "Invalid String" << endl;
    }

    return 0;
}