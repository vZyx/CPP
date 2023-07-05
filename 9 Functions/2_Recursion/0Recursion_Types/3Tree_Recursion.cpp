
#include<bits/stdc++.h>

using namespace std;


// if a recursive function calling itself for more than one time then it’s known as Tree Recursion.

// Tree Recursive function
void fun(int n)
{
    if (n > 0) 
    {
        cout << " " << n;
        // Calling once
        fun(n - 1);

        // Calling twice
        fun(n - 1);
    }
}


int main() {
    fun(3);
    return 0;
}
