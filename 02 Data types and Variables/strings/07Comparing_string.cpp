#include <bits/stdc++.h>
using namespace std;

int main() {

    char B[] = "Boxer";
    char C[] = "Boxing";

    int i, j;

    cout << "1st String is \"" << B << "\"" << endl;
    cout << "2nd String is \"" << C << "\"" << endl;

    for (i = 0, j = 0; B[i] != '\0' && C[j] != '\0'; i++, j++) 
    {
        if (B[i] != C[j])
            break;
    }

    if (B[i] == C[j])
        cout << "Both strings are equal" << endl;
    else if (B[i] < C[j])
        cout << "1st string is smaller" << endl;
    else
        cout << "1st string is greater" << endl;

    return 0;
}

