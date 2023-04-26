#include <iostream>
#define pi 3.14
using namespace std;

double circumference(double r) {
	return 2*r*pi;
}

int main() {
	double r;
	cin >> r;
	cout << circumference(r);
	return 0;
}
