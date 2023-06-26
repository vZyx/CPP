
#include<bits/stdc++.h>
using namespace std;

//A prime number is a natural number that is only divisible by 1 and by itself.
bool isPrime(int N)
{
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;

    bool ans = isPrime(n);
    if (n != 1 && ans == true) {
    cout << "Prime Number";
    } else {
    cout << "Not Prime Number";
    }

    return 0;
}
// 11, 13, 5, 17
// 17 = 1 and 17