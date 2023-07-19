#include <bits/stdc++.h>
#include <cstring>

using namespace std;
int main() 
{
    char B[] = "riding";//7
    int H[26];
    cout << "String is \"" << B << "\"\n";
    
    for (int i = 0; i < 26; i++) 
    {
        H[i] = 0;
    }
    
    for (int i = 0; B[i] != '\0'; i++)
    {
        H[B[i] - 'a'] += 1;
    }
    
    for (int i = 0; i < 26; i++) 
    {
        if (H[i] > 1) 
        {
            cout << "'" << static_cast<char>(i + 'a') << "' is repeating: " << H[i] << " times\n";
        }
    }

    return 0;
}