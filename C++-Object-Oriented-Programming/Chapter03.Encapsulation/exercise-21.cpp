#include <iostream>
#include <string>

class Person {
private:
	int id;
	std::string name;
	int age;
	std::string address;

public:
    Person(int _id = 0, const std::string& _name = "", int _age = 0, const std::string& _address = "");
    int getId() const;
    const std::string& getName() const;
    int getAge() const;
    const std::string& getAddress() const;
    friend std::ostream& operator<<(std::ostream& out, Person p);
};

int main() {
    Person p(1001, "Quynh", 24, "Ha Noi");
    std::cout << p;
	return 0;
}

Person::Person(int _id, const std::string& _name, int _age, const std::string& _address)
    : id(_id)
    , name(_name)
    , age(_age)
    , address(_address) {}

int Person::getId() const {
    return id;
}

const std::string& Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

const std::string& Person::getAddress() const {
    return address;
}

std::ostream& operator<<(std::ostream& out, Person p) {
    out << "Id: " << p.getId() << '\n';
	out << "Name: " << p.getName() << '\n';
	out << "Age: " << p.getAge() << '\n';
	out << "Address: " << p.getAddress() << '\n';
    return out;
}