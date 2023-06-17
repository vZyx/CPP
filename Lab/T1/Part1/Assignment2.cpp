#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    
    int choice;
    double area, radius, length, width, base, height;
    const double PI = 3.14159;

    const int CIRCLE_CHOICE = 1,
    RECTANGLE_CHOICE = 2,
    TRIANGLE_CHOICE = 3,
    QUIT_CHOICE = 4;

    //display the menu and get a choice
    cout<< "\tGeometry Calculator\n"
    <<"------------------------------------\n"
    << "\t1. Area of Circle \n"
    << "\t2. Area of Rectangle \n"
    << "\t3. Area of Triangle \n"
    << "\t4. Quit \n"
    << "\nEnter your selection (1-4): ";

    cin >> choice;

    cout << fixed << setprecision(2);

    switch(choice) {

        case CIRCLE_CHOICE: //circle (1)
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        if(radius < 0) {
        cout << "Radius cannot be negative!! \n\n"
        << "Enter radius again: \n";
        cin >> radius;
    }
    area = PI * radius * radius;
    cout << "The circle's area is = " << area << " square units \n\n";
    break;

    case RECTANGLE_CHOICE: //rectangle (2)
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    if(length < 0) {
        cout<< "Length cannot be less than 0!! \n\n"
        << "Enter length again: \n";
        cin >> length;
    }
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    if(width < 0) {
            cout<< "Width cannot be less than 0!! \n\n"
                << "Enter width again: \n";
            cin >> width;
    }
    area = length * width;
    cout << "The rectangle's area is = " << area << " square units \n\n";
    break;

    case TRIANGLE_CHOICE://Triangle (3)
    cout << "Enter the base of the triangle: ";
    cin >> base;
    if(base < 0) {
        cout << "Base cannot be less than 0!! \n\n"
        << "Enter base again: \n";
        cin >> base;
    }
    cout << "Enter the height of the triangle: ";
    cin >> height;
    if(height < 0) {
        cout << "Height cannot be less than 0!! \n\n"
        << "Enter height again: \n";
        cin >> height;
    }
    area = base * height * 0.5;
    cout << "The triangle's area is = " << area << " square units \n\n";
    break;

    case QUIT_CHOICE:// Quit choice 4
    cout << "\nThe program is ending...\n\n";
    break;

    default:
    cout << "The valid choices are 1-4 \n\n"
    << "Run the program again \n\n";
}

    return 0;
}