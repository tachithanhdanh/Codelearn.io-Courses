#ifndef PART_TIME_EMPLOYEE_HPP_
#define PART_TIME_EMPLOYEE_HPP_
#include "Employee.hpp"

class PartTimeEmployee final: public Employee {
private:
    int workingHours;

public:
    PartTimeEmployee(const std::string& name, int paymentPerHour, int workingHours);
    int calculateSalary() const override;
};

#endif