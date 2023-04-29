#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;
    
    void getInformation();
    void display();
};

int main() {
    Student s1;
    s1.getInformation();
    s1.display();
}

void Student::getInformation() {
    std::cin >> name >> age;
    return;
}

void Student::display() {
    std::cout << "Name: " << name;
    std::cout << '\n';
    std::cout << "Age: " << age;
    std::cout << '\n';
    return;
}