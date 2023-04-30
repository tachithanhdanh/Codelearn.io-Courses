#include <iostream>
#include "Rectangle.hpp"

int main() {
	Rectangle r(4, 5);
	std::cout << "Area: " << r.getArea() << '\n';
	std::cout << "Perimeter: " << r.getPerimeter() << '\n';
	r.setLength(2);
	r.setWidth(3);
	std::cout << "Area: " << r.getArea() << '\n';
	std::cout << "Perimeter: " << r.getPerimeter() << '\n';
	return 0;
}