#include<bits/stdc++.h>

using namespace std;

//Indirect Recursion: In this recursion, there may be more than one functions and they are calling one another in a circular manner.
    void funA(int n)
    {
        if(n>0)
        {
            printf("%d ",n);
            funB(n-1); //function B
        }
    }

    void funB(int n)
    {
        if(n>1)
        {
            printf("%d ",n); //function B
            funA(n/2);
        }
    }

int main(){
    funA(20);
    return 0;
}