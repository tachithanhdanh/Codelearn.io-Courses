#include <iostream>
#include <algorithm>

using namespace std;

void sortArray(int arr[1000], int n) {
	sort(arr,arr+n); reverse(arr,arr+n);
	for (int i=0;i<n;i++) cout << arr[i] << " ";
}

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sortArray(arr, n);
	return 0;
}
