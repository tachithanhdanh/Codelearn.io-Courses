#include<iostream>

using namespace std;

int main() {
	int a = 5;
	int* p;
	p = &a;
	*p =(*p)*4 ;
	cout << "Value of a: " << a;
	return 0;
}
