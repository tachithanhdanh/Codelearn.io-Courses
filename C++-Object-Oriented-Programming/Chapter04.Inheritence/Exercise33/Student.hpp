#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include "Person.hpp"
#include <string>

class Student: public Person {
private:
    double gpa;

public:
    Student(const std::string& name, int age, const std::string& address, double gpa);
    void setGpa(double gpa);
    double getGpa() const;
    void display() const;
};

#endif