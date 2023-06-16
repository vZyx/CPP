#include <bits/stdc++.h>
using namespace std;

void pattern6(int N){
    for(int i = 1; i <= N; i++) // 
    {
        for(int j = 1; j <= N - i + 1; j++) // total number - row number + 1
        {
            cout << j << " "; 
        }
        cout << endl;
    }
}



    int main(){

    pattern6(5);
/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/



        return 0;
    }