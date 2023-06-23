#ifndef POLYLINE_HPP_
#define POLYLINE_HPP_
#include "Point.hpp"
#include <vector>

class PolyLine final {
private:
    std::vector<Point> points;

public:
    PolyLine(): points() {}
    PolyLine(const std::vector<Point> points): points(points) {}
    void appendPoint(const Point& point) {
        points.push_back(point);
    }
    void appendPoint(int x, int y) {
        points.push_back(Point(x, y));
    }
    double getLength() const {
        double length = 0.0;
        for (int i = 1; i < points.size(); ++i) {
            length += Point::distance(points[i- 1], points[i]);
        }
        return length;
    }
};

#endif