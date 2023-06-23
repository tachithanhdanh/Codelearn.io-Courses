#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Person {
private:
	string name;
	int dob;
public:
	Person(string name, int dob) {
		this->name = name;
		this->dob = dob;
	}
	
	const string& getName() const {
        return this->name;
    }

    const int& getDob() const {
        return this->dob;
    }
};

class Student : public Person {
private:
    double gpa;
public:
    Student(string name, int dob, double gpa): Person(name, dob), gpa(gpa) {}

    const double& getGpa() const {
        return this->gpa;
    }
};

int main() {
	Student s("Hai", 1999, 8.8);
	cout << "Name: " << s.getName() << endl;
	cout << "Date of birth: " << s.getDob() << endl;
	cout << "GPA: " << s.getGpa() << endl;
	return 0;
}
