#include "Circle.hpp"

Circle::Circle(double radius): radius(radius) {}

double Circle::getArea() const {
    return Circle::PI * radius * radius;
}

double Circle::getPerimeter() const {
    return 2.0 * Circle::PI * radius;
}