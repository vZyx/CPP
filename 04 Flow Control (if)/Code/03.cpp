#include <iostream>
#include <string>
using namespace std;


int main() {

int age;
cout << "What's the age: " << endl;
cin >> age;

if (age < 18){
    cout << "Not eligible for job" << endl;
}
else if (age <= 54) {
    cout << "eligible for job" << endl;
}
else if (age <= 57 &){
    cout << "eligible for job" << endl;
    if (age >= 55)
    cout << "eligible for job, but retirement soon"
}
else{
    cout << "retirement time" << endl;
}

    return 0;
}
