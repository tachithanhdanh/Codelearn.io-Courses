#include "Customer.hpp"
#include <iostream>

Customer::Customer(const std::string& name, const std::string& address, int balance)
    : Person(name, address)
    , balance(balance) {}

int Customer::getBalance() const {
    return this->balance;
}

void Customer::display() const {
    std::cout << "Customer name: " + getName() + "\n";
    std::cout << "Customer address: " + getAddress() + "\n";
    std::cout << "Customer balance: " << getBalance() << '\n';
}