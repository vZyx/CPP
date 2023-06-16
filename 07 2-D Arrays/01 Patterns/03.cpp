#include <bits/stdc++.h>
using namespace std;

void pattern3(int N){
    for(int i = 1; i <= N;i++)
    {
        for(int j = 1; j <=i; j++)
        {
            cout << j << "";
        }
        cout << endl;
    }
}



    int main(){

    pattern3(3);
/*
1
12
123
*/



        return 0;
    }