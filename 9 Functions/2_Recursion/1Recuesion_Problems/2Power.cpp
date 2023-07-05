#include <bits/stdc++.h>
using namespace std;

int pow(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * pow(base, powerRaised-1) );
    else
        return 1;
}

int pow2(int base, int powerRaised);

int main()
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = pow(base, powerRaised);

    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

int pow2(int base, int powerRaised)
{
    if (powerRaised == 0)
        return 1;

        if(powerRaised % 2 == 0)
            return ( base * pow2(base * base, powerRaised / 2 ) );
        return base * pow2(base * base, (powerRaised - 1) / 2);


}
