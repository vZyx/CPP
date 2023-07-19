#include <bits/stdc++.h>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char B[] = "riding";//7

    cout << "String is \"" << B << "\"\n";
    
    for (int i = 0; i <= 4; i++) 
    {
        int count = 1;
        for (int j = i + 1; B[j] != '\0'; j++) 
        {
            if (B[i] == B[j])
            {
                count++;
                B[j] = -1;
            }
        }

        if (count > 1 && B[i] != -1) 
        {
            cout << "'" << B[i] << "' is appearing: " << count << " times\n";
        }
    }
    
    return 0;
}