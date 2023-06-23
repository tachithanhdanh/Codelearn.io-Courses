#ifndef INVOICE_HPP_
#define INVOICE_HPP_
#include "Customer.hpp"

class Invoice final {
private:
    int id;
    Customer customer;
    double amount;

public:
    Invoice(int id, const Customer& customer, double amount)
        : id(id), customer(customer), amount(amount) {}

    void setAmount(double amount) {
        this->amount = amount;
    }

    void setCustomer(const Customer& customer) {
        this->customer = customer;
    }

    int getId() const {
        return this->id;
    }

    double getAmount() const {
        return this->amount;
    }

    const Customer& getCustomer() const {
        return this->customer;
    }

    const std::string& getCustomerName() const {
        return this->customer.getName();
    }

    double getAmountAfterDiscount() const {
        return this->amount * (100 - this->customer.getDiscount()) / 100;
    }
};

#endif