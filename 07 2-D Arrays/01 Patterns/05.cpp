#include <bits/stdc++.h>
using namespace std;

void pattern5(int N){
    for(int i = 1; i <= N; i++) // 
    {
        for(int j = 0; j < N - i + 1; j++) // total number - row number + 1
        {
            cout << "* "; // printing the row number
        }
        cout << endl;
    }
}



    int main(){

    pattern5(5);
/*

* * * * *
* * * *
* * *
* *
*

*/



        return 0;
    }