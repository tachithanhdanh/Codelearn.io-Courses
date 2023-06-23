#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_
#include "Shape.hpp"

class Circle final: public Shape {
private:
    double radius;
    static constexpr double PI = 3.14;

public:
    Circle(double radius);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif