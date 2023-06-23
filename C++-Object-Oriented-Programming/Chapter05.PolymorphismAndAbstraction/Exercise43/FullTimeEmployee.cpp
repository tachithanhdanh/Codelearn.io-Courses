#include "FullTimeEmployee.hpp"

FullTimeEmployee::FullTimeEmployee(const std::string& name, int paymentPerHour): Employee(name, paymentPerHour) {}

int FullTimeEmployee::calculateSalary() const {
    return FullTimeEmployee::workingHours * this->getPaymentPerHour();
}