#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter two integers: ";
	int n1, n2;
    cin >> n1 >> n2;

	int ans;
	for (int i = 1; i <= min(n1, n2); i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			ans = i;
		}
	}
	cout << "The GCD of the two numbers is " << ans;
}