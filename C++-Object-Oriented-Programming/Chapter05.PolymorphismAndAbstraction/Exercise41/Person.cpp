#include "Person.hpp"

Person::Person(const std::string& _name, const std::string& _address): name(_name), address(_address) {}

void Person::setName(const std::string& name) {
    this->name = name;
}

const std::string& Person::getName() const {
    return this->name;
}

void Person::setAddress(const std::string& address) {
    this->address = address;
}

const std::string& Person::getAddress() const {
    return this->address;
}
