#include <bits/stdc++.h>
using namespace std;

void pattern4(int N){
    for(int i = 1; i <= N;i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << i << " "; // printing the row number
        }
        cout << endl;
    }
}



    int main(){

    pattern4(3);
/*
1
2 2
3 3 3
*/



        return 0;
    }