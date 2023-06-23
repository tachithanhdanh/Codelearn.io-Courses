#include "PartTimeEmployee.hpp"

PartTimeEmployee::PartTimeEmployee(
const std::string& name, 
int paymentPerHour, 
int workingHours
)
: Employee(name, paymentPerHour)
, workingHours(workingHours) {}
    
int PartTimeEmployee::calculateSalary() const {
    return workingHours * getPaymentPerHour();
}