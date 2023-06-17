// Task#3: Write a program in C++ to display the n terms of odd natural number and their sum

// Display the n terms of odd natural number and their sum
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum;
    cout << "\n\n Display n terms of odd natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << " The odd numbers are: ";
    
    for (i = 1; i <= n; i++)  {
        cout << 2 * i - 1 << " ";
        sum += 2 * i - 1;
}
    cout << "\n The Sum of odd Natural Numbers upto " << n <<" is " <<sum << endl;
return 0;
}

