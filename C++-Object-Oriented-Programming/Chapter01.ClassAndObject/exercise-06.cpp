#include <iostream>
#include <string>

class Student {
private:
    std::string m_name;
    int m_age;
public:
    Student(const std::string& name = "", int age = 0);
    void display();
};

int main() {
    Student s1("Long", 24);
    Student s2("Kien", 29);
    s1.display();
    s2.display();
    return 0;
}

Student::Student(const std::string& name, int age): m_name(name), m_age(age) {}

void Student::display() {
    std::cout << "Name: " << this->m_name << '\n';
    std::cout << "Age: " << this->m_age << '\n';
    return;
}