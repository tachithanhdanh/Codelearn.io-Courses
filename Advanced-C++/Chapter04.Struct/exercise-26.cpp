#include<iostream>
#include<string>
#define endl "\n"
using namespace std;

struct Student{
	string name;int age;
};

int main() {
	Student a;
	cin >> a.name >> a.age;
	cout << "Name: " << a.name << endl << "Age: " << a.age;
	return 0;
}
