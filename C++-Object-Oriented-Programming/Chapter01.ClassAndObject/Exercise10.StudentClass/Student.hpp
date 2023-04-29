#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string gender;
    double gpa;

public:
    Student(const std::string& _name = "", int _age = 0, const std::string& _gender = "", double _gpa = 0.0);
    void display();
};

#endif