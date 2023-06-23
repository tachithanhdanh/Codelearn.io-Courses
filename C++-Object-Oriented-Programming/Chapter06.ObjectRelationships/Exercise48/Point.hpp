#ifndef POINT_HPP_
#define POINT_HPP_
#include <cmath>

class Point final {
private:
    int x;
    int y;
    static double sqr(int x) {
        return x * x;
    }

public:
    Point(int x = 0, int y = 0): x(x), y(y) {}
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    int getX() const { return this->x; }
    int getY() const { return this->y; }
    static double distance(Point p1, Point p2) {
        return std::sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
    }
};

#endif