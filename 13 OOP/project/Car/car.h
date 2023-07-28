#pragma once

#include <string>

using namespace std;

class Car
{
private:
    string brand;
    string color;
    int model;

public:
    void setBrand(string b);
    string getBrand();

    void setColor(string c);
    string getColor();
};