#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_
#include <string>

class Employee {
private:
    std::string name;
    int paymentPerHour;

public:
    Employee(const std::string& name, int paymentPerHour);
    void setName(const std::string& name);
    void setPaymentPerHour(int paymentPerHour);
    const std::string& getName() const;
    int getPaymentPerHour() const;
    virtual int calculateSalary() const = 0;
};

#endif