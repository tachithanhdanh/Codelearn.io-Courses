#include "Person.hpp"
#include <iostream>

Person::Person(const std::string& name, int age, const std::string& address)
    : name(name)
    , age(age)
    , address(address) {}

void Person::setName(const std::string& name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setAddress(const std::string& address) {
    this->address = address;
}

const std::string& Person::getName() const {
    return this->name;
}

int Person::getAge() const {
    return this->age;
}

const std::string& Person::getAddress() const {
    return this->address;
}

void Person::display() const {
    std::cout << "Name: " << this->name << '\n';
    std::cout << "Age: " << this->age << '\n';
    std::cout << "Address: " << this->address << '\n';
}