#include <bits/stdc++.h>
using namespace std;


/*
A = {'P', 'y', 't', 'h', 'o', 'n', '\n'}
      i                        j
*/

int main()
{
    string A = "Python";
    cout << "Original String is: " << A << endl;

    int i, j, t;

    j = A.length() - 1;

    for (i = 0; i < j; i++, j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    cout << "Reversed String is: " << A << endl;

    return 0;
}