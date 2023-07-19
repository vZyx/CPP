#include<iostream>
#include<string>
#include "car.h"

using namespace std;

int main()
{
    Car c1;
    c1.setBrand("Ford");
    c1.setColor("White");

    cout << c1.getBrand() << endl;
    cout << c1.getColor() << endl;
    
    return 0;
}