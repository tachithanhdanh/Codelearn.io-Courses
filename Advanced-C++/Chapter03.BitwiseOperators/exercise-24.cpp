#include<iostream>

using namespace std;

int main() {
	int a,n; cin >> a >> n;--n; a=a>>n;
	cout << (a&1);
	return 0;
}
