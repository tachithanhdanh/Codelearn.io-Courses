#include <iostream>

using namespace std;

void show(string arr[1000], int n) {
	for (int i=0;i<n;i++) if (arr[i].size()>=3) cout << arr[i] << " ";
}

int main() {
	int n;
	string arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	show(arr, n);
	return 0;
}
