#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_
#include <string>

class Customer final {
private:
    int id;
    std::string name;
    int discount;

public:
    Customer(int id = 0, const std::string& name = "", int discount = 0)
        : id(id), name(name), discount(discount) {}

    void setID() = delete;
    
    void setName(const std::string& name) {
        this->name = name;
    }
    
    void setDiscount(int discount) {
        this->discount = discount;
    }

    int getId() const {
        return this->id;
    }

    const std::string& getName() const {
        return this->name;
    }

    int getDiscount() const {
        return this->discount;
    }
};

#endif