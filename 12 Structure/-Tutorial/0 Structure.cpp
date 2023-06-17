#include<iostream>
using namespace std;

/*  https://www.w3schools.com/cpp/cpp_structs.asp    https://www.programiz.com/cpp-programming/structure

    Structures (also called structs) are a way to group several related variables into one place.
    Each variable in the structure is known as a member of the structure.
    Unlike an array, a structure can contain many different data types (int, string, bool, etc.)            */

struct Person {     // Structure declaration
    char name[50];  // Member (char variable)
    int age;        // Member (int variable)
    float salary;   // Member (float variable)
};

int main() {
    // define a structure variable 
    Person Person1;
    // The members of structure variable is accessed using a dot (.) operator "Class Member Access Operator"
    cout << "Enter Full name: ";
    cin.get(Person1.name, 50);
    cout << "Enter age: ";
    cin >> Person1.age;
    cout << "Enter salary: ";
    cin >> Person1.salary;

    cout << "======================\nDisplaying Information.\n======================" << endl;
    cout << "Name: " << Person1.name << endl;
    cout <<"Age: " << Person1.age << endl;      
    cout << "Salary: " << Person1.salary;       

    return 0;
}