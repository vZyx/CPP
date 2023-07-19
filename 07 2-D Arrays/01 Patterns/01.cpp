#include <bits/stdc++.h>
using namespace std;

/*
(1) for the outer loop, count the number of rows.
(2) for the inner loop, focus on the columns and connect them to the rows 
by forming a logic such that for each row we get the required number of columns to be printed.
(3) We print the ‘*’ inside the inner loop.
(4) Observe symmetry in the pattern or check if a pattern is a combination of two or more similar patterns. (Some questions)
*/
void pattern1(int N)
{
    
    for (int i = 0; i < N; i++) // Outer loop for rows
    {
        // as we have to print a rectangular pattern.
        for (int j = 0; j < N; j++) // Inner loop for columns
        {
            cout << "* ";
        }

        // As soon as N stars are printed, we move to the next row
        // And give a line break otherwise all stars
        // would get printed in 1 line. 
        cout << endl;
    }
}

int main(){

    // the value of N as 5.
    int N = 5;

    pattern1(N);

/*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

    return 0;
}