#include <bits/stdc++.h>
using namespace std;

void pattern8(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }

        // For printing the stars in each row
        for(int j=0; j< 2*N - (2*i +1); j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        

        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;

    pattern8(N);

    return 0;
}
/*

  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/    