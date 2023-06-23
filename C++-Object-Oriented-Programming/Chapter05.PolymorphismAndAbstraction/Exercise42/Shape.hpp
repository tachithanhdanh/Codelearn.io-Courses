#ifndef SHAPE_HPP_
#define SHAPE_HPP_

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif
