#include <iostream>

using namespace std;
// or []
int * fun(int n)
{
    int *p;
    p = new int[n];
    return p;
}

int main() {

    int *A;
    A = fun(5);

    return 0;
}