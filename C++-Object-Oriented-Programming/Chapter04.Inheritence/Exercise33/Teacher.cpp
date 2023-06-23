#include "Teacher.hpp"
#include <iostream>

Teacher::Teacher(const std::string& name, int age, const std::string& address, int salary)
    : Person(name, age, address)
    , salary(salary) {}
    
void Teacher::setSalary(int salary) {
    this->salary = salary;
}

double Teacher::getSalary() const {
    return this->salary;
}

void Teacher::display() const {
    Person::display();
    std::cout << "Salary: " << this->salary << '\n';
}