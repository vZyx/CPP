#pragma once
#include<iostream>
#include<string>
using namespace std;

// class Declaration 
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