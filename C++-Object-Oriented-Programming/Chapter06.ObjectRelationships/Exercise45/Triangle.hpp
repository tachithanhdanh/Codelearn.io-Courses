#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_
#include "Point.hpp"

class Triangle final {
private:
    Point vertice1;
    Point vertice2;
    Point vertice3;

public:
    Triangle(Point vertice1, Point vertice2, Point vertice3)
        : vertice1(vertice1), vertice2(vertice2), vertice3(vertice3) {}
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
        : vertice1(x1, y1), vertice2(x2, y2), vertice3(x3, y3) {}
    double getPerimeter() const {
        return Point::distance(vertice1, vertice2) 
                + Point::distance(vertice2, vertice3) + Point::distance(vertice1, vertice3);
    }
};

#endif