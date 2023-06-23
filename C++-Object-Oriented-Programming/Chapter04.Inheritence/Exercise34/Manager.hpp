#ifndef MANAGER_HPP_
#define MANAGER_HPP_
#include "Employee.hpp"

class Manager: public Employee {
private:
    int bonus;

public:
    Manager(const std::string& name, int salary, int bonus);
    void setBonus(int bonus);
    int getBonus() const;
    int getSalary() const;
    void display() const;
};

#endif