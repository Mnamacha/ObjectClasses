#ifndef Rectangle_h
#define Rectangle_h

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float, float);

    // Accessor methods
    void setLength(float);
    void setWidth(float);
    float getLength();
    float getWidth();

    // Member function to calculate area
    float calculateArea();
};
#endif
#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Overloaded constructor
Rectangle::Rectangle(float l, float w) {
    length = l;
    width = w;
}

// Accessor methods
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() {
    return length;
}

float Rectangle::getWidth() {
    return width;
}

// Member function to calculate area
float Rectangle::calculateArea() {
    return length * width;
}
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Create an instance of Rectangle
    Rectangle rectangle1;

    // Get length and width from user input
    float length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Set length and width using accessor methods
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    // Calculate and output area
    float area = rectangle1.calculateArea();
    cout << "Area of rectangle 1: " << area <<endl;

    // Create another instance of Rectangle using overloaded constructor
    Rectangle rectangle2;

    // Get length and width from user input
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    // Create rectangle2 using overloaded constructor
    Rectangle rectangle2(length, width);

    // Calculate and output area
    area = rectangle2.calculateArea();
    cout << "Area of rectangle 2: " << area <<endl;

    return 0;
}