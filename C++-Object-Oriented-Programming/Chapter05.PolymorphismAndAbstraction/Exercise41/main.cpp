#include "Employee.hpp"
#include "Customer.hpp"
#include <iostream>
#include <string>

int main() {
    using std::cout;
    using std::string;
    string name1 = "abc";
    string address1 = "hello";
    string name2 = "hahaha";
    string address2 = "test";
    Employee* e1 = new Employee(name1, address1, 1000);
    Customer* c1 = new Customer(name2, address2, 2000);
    e1->display();
    c1->display();
    return 0;
}