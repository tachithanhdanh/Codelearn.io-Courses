#include <iostream>

class Rectangle {
private:
    double m_length{0.0};
    double m_width{0.0};
    double m_area{0.0};
    double m_perimeter{0.0};

public:
    void getInformation();
    void calculate();
    void display();
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}

void Rectangle::getInformation() {
    std::cin >> m_length >> m_width;
    calculate();
}

void Rectangle::calculate() {
    m_area = m_length * m_width;
    m_perimeter = 2.0 * (m_length + m_width);
}

void Rectangle::display() {
    std::cout << "Area: " << m_area << '\n';
    std::cout << "Perimeter: " << m_perimeter << '\n';
}
