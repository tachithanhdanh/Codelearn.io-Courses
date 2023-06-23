#include "Manager.hpp"
#include <iostream>

Manager::Manager(const std::string& name, int salary, int bonus)
    : Employee(name, salary)
    , bonus(bonus) {}

void Manager::setBonus(int bonus) {
    this->bonus = bonus;
}

int Manager::getBonus() const {
    return this->bonus;
}

int Manager::getSalary() const {
    return Employee::getSalary() + Manager::getBonus();
}

void Manager::display() const {
    std::cout << "Name: " + this->getName() + "\n";
    std::cout << "Salary: " << getSalary() << '\n';
}