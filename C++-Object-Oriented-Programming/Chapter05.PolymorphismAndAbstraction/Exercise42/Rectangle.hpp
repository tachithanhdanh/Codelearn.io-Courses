#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_
#include "Shape.hpp"

class Rectangle final: public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif
