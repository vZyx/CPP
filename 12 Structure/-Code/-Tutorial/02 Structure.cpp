#include <iostream>
using namespace std;

//  passing structs as arguments

//Structure declaration
    struct Car{
        string model;
        int year;
        string color;
    };

//   Function passed with value
    void printCar(Car p);



int main() {
    Car car1, car2;

    // car1
    car1.model = "Mustang";
    car1.year  = 2023;
    car1.color = "Red";
    // car2
    car2.model = "Corvette";
    car2.year  = 2024;
    car2.color = "Blue";

    
    // car 1
    cout << &car1 <<  " Address inside main" << endl;
    printCar(car1);

    cout << endl; // space

    //car 2
    cout << &car2 <<  " Address inside main" << endl; 
    printCar(car2);


    return 0;
}

    //Function passed with value
    void printCar(Car p) {
        cout << &p <<  " Address inside function" << endl;     // print address
        cout << p.model << endl;
        cout << p.year  << endl;
        cout << p.color << endl;
    }
