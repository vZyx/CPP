#include <iostream>
using namespace std;

//  Structure and Function


//Structure
struct Person {
    char name[50];
    int age;
    float salary;
};

void displayData(Person); // Function declaration

int main() {

    Person p;

    cout << "Enter Full name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;
    // Function call with (structure variable as an argument (p) )
    displayData(p);

    return 0;
}

void displayData(Person x) {
    cout << "\nDisplaying Information.\n"<< endl;
    cout << "Name: " << x.name <<endl;
    cout <<"Age: " << x.age <<endl;
    cout << "Salary: " << x.salary;
}
