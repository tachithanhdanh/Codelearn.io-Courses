class Circle {
private:
    double radius;
    static constexpr double PI = 3.14;

public:
    Circle (double _radius = 0.0): radius(_radius) {}
    double getArea() { return PI * radius * radius; }
    double getCircumference() {return 2.0 * PI * radius; }       
};