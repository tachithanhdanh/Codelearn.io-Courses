#include "Student.hpp"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& address, double gpa)
    : Person(name, age, address)
    , gpa(gpa) {}
    
void Student::setGpa(double gpa) {
    this->gpa = gpa;
}

double Student::getGpa() const {
    return this->gpa;
}

void Student::display() const {
    Person::display();
    std::cout << "GPA: " << this->gpa << '\n';
}