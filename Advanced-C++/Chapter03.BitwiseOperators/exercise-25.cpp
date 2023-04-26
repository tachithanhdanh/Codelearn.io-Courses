#include<iostream>

using namespace std;

int main() {
	int n=1,a; n=n<<3; n=~n; 
	cin >> a; cout << (a&n);
	return 0;
}
