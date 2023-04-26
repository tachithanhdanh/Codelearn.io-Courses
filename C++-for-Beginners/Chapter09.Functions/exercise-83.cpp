#include <iostream>

using namespace std;

int maxOfArray(int arr[1000], int n) {
	int max =arr[0];
	for (int i=1;i<n;i++) if (max<arr[i]) max=arr[i];
	return max;
}

int main() {
	int n1, n2;
	int arr1[1000], arr2[1000];
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> arr1[i];
	}
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cin >> arr2[i];
	}

	cout << maxOfArray(arr1, n1) << " " << maxOfArray(arr2, n2);

	return 0;
}
