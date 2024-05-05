#ifndef Rectangle_h
#define Rectangle_h

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Accessor methods
    void setLength(float);
    void setWidth(float);
    float getLength();
    float getWidth();

    // Member function to calculate area
    float calculateArea();
}

#endif /* Rectangle_h */
#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
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

int main() {
    // Create an instance of Rectangle
    Rectangle rectangle;

    // Get length and width from user input
    float length, width;
    std::cout << "Enter length: ";
    std::cin >> length;
    std::cout << "Enter width: ";
    std::cin >> width;

    // Set length and width using accessor methods
    rectangle.setLength(length);
    rectangle.setWidth(width);

    // Calculate and output area
    float area = rectangle.calculateArea();
    std::cout << "Area of rectangle: " << area << std::endl;

    return 0;
}

