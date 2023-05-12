#include <iostream>
using namespace std;

// A acts as a pointer. We can do this *A instead.

//pass by address and the number by value
void print(int A[], int n){
    //Changing the 1st Value
    A[0] = 25;
    int i;
    for(i=0; i<n; i++){
        cout << A[i] << " ";
    }
}

int main() {

    int A[5] ={2,4,6,8,10};

    cout << "Before" << endl;
    for(int i=0; i<5; i++){
        cout << A[i] << " ";
    }

    cout << "\nAfter" << endl;
    print(A, 5);

return 0;
}