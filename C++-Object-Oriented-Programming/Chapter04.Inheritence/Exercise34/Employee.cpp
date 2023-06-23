#include "Employee.hpp"
#include <iostream>

Employee::Employee(const std::string& name, int salary)
    : name(name)
    , salary(salary) {}

void Employee::setName(const std::string& name) {
    this->name = name;
}

void Employee::setSalary(int salary) {
    this->salary = salary;
}

const std::string& Employee::getName() const {
    return this->name;
}

int Employee::getSalary() const {
    return this->salary;
}

void Employee::display() const {
    std::cout << "Name: " << this->name << '\n';
    std::cout << "Salary: " << this->salary << '\n';
}