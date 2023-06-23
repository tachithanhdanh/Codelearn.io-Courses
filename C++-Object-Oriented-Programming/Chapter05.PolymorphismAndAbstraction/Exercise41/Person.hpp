#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>

class Person {
private:
    std::string name;
    std::string address;

public:
    Person(const std::string& name, const std::string& address);
    void setName(const std::string& name);
    const std::string& getName() const;
    void setAddress(const std::string& address);
    const std::string& getAddress() const;
    virtual void display() const = 0;
};

#endif