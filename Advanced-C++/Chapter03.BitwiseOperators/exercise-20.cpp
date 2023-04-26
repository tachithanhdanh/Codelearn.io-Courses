#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if (a & 1) {
		cout << "a is an odd number";
	} else {
		cout << "a is an even number";
	}
	return 0;
}
