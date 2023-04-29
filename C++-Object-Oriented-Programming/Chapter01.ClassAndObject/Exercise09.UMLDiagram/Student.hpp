#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include <string>

class Student {
private:
    std::string name;
    int age;

public:
    Student();
    void getInformation();
    void display();
};

#endif