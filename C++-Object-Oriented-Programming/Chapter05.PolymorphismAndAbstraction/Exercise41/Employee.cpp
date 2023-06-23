#include "Employee.hpp"
#include <iostream>

Employee::Employee(const std::string& name, const std::string& address, int salary)
    : Person(name, address)
    , salary(salary) {}

int Employee::getSalary() const {
    return this->salary;
}

void Employee::display() const {
    std::cout << "Employee name: " + getName() + "\n";
    std::cout << "Employee address: " + getAddress() + "\n";
    std::cout << "Employee salary: " << getSalary() << '\n';
}