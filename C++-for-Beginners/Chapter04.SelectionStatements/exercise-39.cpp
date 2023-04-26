#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if (a>=10 && a<=100) cout << a << " is in the range [10, 100]\n";
	else  cout << a << " is not in the range [10, 100]\n";
	return 0;
}
