#ifndef FULL_TIME_EMPLOYEE_HPP_
#define FULL_TIME_EMPLOYEE_HPP_
#include "Employee.hpp"

class FullTimeEmployee final: public Employee {
private:
    static constexpr int workingHours = 8;

public:
    FullTimeEmployee(const std::string& name, int paymentPerHour);
    int calculateSalary() const override;
};

#endif