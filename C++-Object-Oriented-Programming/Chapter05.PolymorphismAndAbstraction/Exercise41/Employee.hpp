#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_
#include "Person.hpp"

class Employee final: public Person {
private:
    int salary;

public:
    Employee(const std::string& name, const std::string& address, int salary);
    int getSalary() const;
    void display() const override;
};

#endif