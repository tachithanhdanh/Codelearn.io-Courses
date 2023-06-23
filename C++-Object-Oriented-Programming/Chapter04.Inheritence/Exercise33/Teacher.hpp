#ifndef TEACHER_HPP_
#define TEACHER_HPP_
#include "Person.hpp"
#include <string>

class Teacher: public Person {
private:
    int salary;

public:
    Teacher(const std::string& name, int age, const std::string& address, int salary);
    void setSalary(int salary);
    double getSalary() const;
    void display() const;
};

#endif