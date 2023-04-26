#include <iostream>

using namespace std;

int sumOfArray(int arr[1000], int n) {
	int s=0;
	for (int i=0;i<n;i++) s+=arr[i];
	return s;
}

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << sumOfArray(arr, n);
	return 0;
}
