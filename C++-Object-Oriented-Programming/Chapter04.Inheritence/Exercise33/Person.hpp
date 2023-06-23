#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string address;

public:
    Person(const std::string& name, int age, const std::string& address);
    void setName(const std::string& name);
    void setAge(int age);
    void setAddress(const std::string& address);
    const std::string& getName() const;
    int getAge() const;
    const std::string& getAddress() const;
    void display() const;
};

#endif