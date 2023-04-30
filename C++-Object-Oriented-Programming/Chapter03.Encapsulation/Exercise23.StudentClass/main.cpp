#include <iostream>
#include "Student.hpp"

using std::cout;

int main() {
	Student s(1001, "Trung", 24, "Ha Noi", 5);
	cout << s.getId() << '\n';
	cout << s.getName() << '\n';
	cout << s.getAge() << '\n';
	cout << s.getAddress() << '\n';
	cout << s.getScore() << '\n';
	s.setScore(-7);
	cout << s.getScore() << '\n';
	s.setScore(15);
	cout << s.getScore() << '\n';
	return 0;
}
