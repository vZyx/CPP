#include <iostream>
using namespace std;


/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.

And To access a private attribute, use public "get" and "set" methods:

Why Encapsulation?

It is considered good practice to declare your class attributes as private (as often as you can).
• Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
• Increased security of data

*/



class Employee {

  private:
    int salary; // Private attribute which have restricted access.

  public:
    void setSalary(int s) // Setter Method. takes a parameter (s) and assigns it to the salary attribute (salary = s).
    { 
      salary = s;
    }

    // Getter
    int getSalary() // returns the value of the private salary attribute
    { 
      return salary;
    }
};

int main() {
  Employee employee1;
  
  employee1.setSalary(50000);
  cout << employee1.getSalary();

  return 0;
}