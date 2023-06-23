#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_
#include <string>

class Employee {
private:
    std::string name;
    int salary;

public:
    Employee(const std::string& name, int salary);
    void setName(const std::string& name);
    void setSalary(int salary);
    const std::string& getName() const;
    int getSalary() const;
    void display() const;
};

#endif