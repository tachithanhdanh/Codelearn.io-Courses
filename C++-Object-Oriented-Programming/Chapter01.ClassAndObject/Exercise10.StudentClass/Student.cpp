#include "Student.hpp"
#include <iostream>

Student::Student(const std::string& _name, int _age, const std::string& _gender, double _gpa)
    : name(_name)
    , age(_age)
    , gender(_gender)
    , gpa(_gpa) {}

void Student::display() {
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
    std::cout << "Gender: " << gender << '\n';
    std::cout << "GPA: " << gpa << '\n';
    return;
}