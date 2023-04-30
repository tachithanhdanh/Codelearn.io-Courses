#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

class Rectangle {
private:
    double m_length;
    double m_width;
public:
    Rectangle(double length = 0.0, double width = 0.0);
    void setLength(double length);
    void setWidth(double width);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    double getPerimeter() const;
};

#endif