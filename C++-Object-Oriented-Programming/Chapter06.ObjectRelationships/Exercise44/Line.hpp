#ifndef LINE_HPP_
#define LINE_HPP_
#include "Point.hpp"

class Line final {
private:
    Point begin;
    Point end;

public:
    Line(Point begin, Point end): begin(begin), end(end) {}

    Line(int x1, int y1, int x2, int y2) {
        begin = Point(x1, y1);
        end = Point(x2, y2);
    }

    void setBegin(Point begin) {
        this->begin = begin;
    }

    void setEnd(Point end) {
        this->end = end;
    }

    Point getBegin() const {
        return this->begin;
    }

    Point getEnd() const {
        return this->end;
    }

    double getLength() const {
        return Point::distance(begin, end);
    }
};

#endif