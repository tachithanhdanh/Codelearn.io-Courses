#include "Employee.hpp"

Employee::Employee(const std::string& name, int paymentPerHour)
    : name(name)
    , paymentPerHour(paymentPerHour) {}

void Employee::setName(const std::string& name) {
    this->name = name;
}

void Employee::setPaymentPerHour(int paymentPerHour) {
    this->paymentPerHour = paymentPerHour;
}

const std::string& Employee::getName() const {
    return this->name;
}

int Employee::getPaymentPerHour() const {
    return this->paymentPerHour;
}
