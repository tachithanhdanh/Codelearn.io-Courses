#include "Rectangle.hpp"

Rectangle::Rectangle(double length, double width): length(length), width(width) {}

double Rectangle::getArea() const {
    return length * width;
}

double Rectangle::getPerimeter() const {
    return 2.0 * (length + width);
}
