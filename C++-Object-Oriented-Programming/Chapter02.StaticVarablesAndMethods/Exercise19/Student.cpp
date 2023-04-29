#include <string>
#include <iostream>

class Student {
private:
    std::string name;
    char gender;

public:
    Student(std::string _name = "Unknown", char _gender = 'u')
        : name(_name)
        , gender(_gender) {}

    Student(char _gender): Student("Unknown", _gender) {}

    void display() {
        std::cout << "Name: " << name << '\n';
        std::string displayed_gender;
        switch(gender) {
            case 'm': displayed_gender = "Male"; break;
            case 'f': displayed_gender = "Female"; break;
            default: displayed_gender = "Unknown"; break;
        }
        std::cout << "Gender: " << displayed_gender << '\n';
        return;
    }

};