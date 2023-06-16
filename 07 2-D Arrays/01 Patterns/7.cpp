#include <bits/stdc++.h>
using namespace std;

// [spaces, stars, spaces]
void pattern7(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        //  printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }

        // stars in each row
        for(int j=0;j < (2*i+1); j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        

        cout << endl;
    }
}

int main()
{   

    int N = 5;

    pattern7(N);

    return 0;
}
/*
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * *  
*/    