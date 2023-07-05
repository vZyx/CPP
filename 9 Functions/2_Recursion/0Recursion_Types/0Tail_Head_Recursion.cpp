
#include<bits/stdc++.h>

using namespace std;

    //Tail Recursion 
    void fun1(int n){
        if(n > 0)
        {
            cout << n << " ";
            fun1(n-1);
        }
    }

    //Head Recursion
    void fun2(int n){    
        if(n > 0)
        {
            fun2(n-1);
            cout << n << " ";
        }
    
    }


int main(){

    int x = 3;

    cout << "fun1 Recursive functions" << "\n";
    fun1(x);

    cout << "\nfun2 Recursive functions" << "\n";
    fun2(x);

    return 0;
}
/*

Tail Recursion:

If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion.
After that call the recursive function performs nothing. (Note: loop is more efficient than tail recursion)
The function has to process or perform any operation at the time of calling and it does nothing at returning time.

Head Recursion:
If a recursive function calling itself and that recursive call is the first statement in the function then it’s known as Head Recursion.
There’s no statement, no operation before the call. (Note: hard to convert it into loop)
The function doesn’t have to process or perform any operation at the time of calling and all operations are done at returning time.


*/