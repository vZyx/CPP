#include <bits/stdc++.h>
using namespace std;
int main()
{
    // increase the size of an array
    int* p;
    int* q;

    p = new int[5] {3, 5, 7, 9, 11};

    q = new int[10];

    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    delete[] p;

    p = q; // p will point to q

    q = nullptr; // q wont point to the array, only p

    for (int i = 0; i < 5; i++) {
        cout << p[i] << " " ;
    }
    
    return 0;
}