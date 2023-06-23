#include "Student.hpp"
#include "Person.hpp"
#include "Teacher.hpp"

int main() {
	Student s("Khanh", 23, "Ha Noi", 9.0);
	s.display();
	Teacher t("Tung", 34, "Ha Noi", 1700);
	t.display();
	return 0;
}