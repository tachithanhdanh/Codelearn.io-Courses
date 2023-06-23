#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_
#include "Person.hpp"

class Customer final: public Person {
private:
    int balance;

public:
    Customer(const std::string& name, const std::string& address, int balance);
    int getBalance() const;
    void display() const override;
};

#endif