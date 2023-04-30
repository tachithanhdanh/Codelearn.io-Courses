#include "Rectangle.hpp"

Rectangle::Rectangle(double length, double width)
    : m_length(length), m_width(width) {}

void Rectangle::setLength(double length) {
    m_length = length;
    return;
}

void Rectangle::setWidth(double width) {
    m_width = width;
    return;
}

double Rectangle::getLength() const {
    return m_length;
}

double Rectangle::getWidth() const {
    return m_width;
}

double Rectangle::getArea() const {
    return m_length * m_width;
}

double Rectangle::getPerimeter() const {
    return 2.0 * (m_length + m_width);
}
