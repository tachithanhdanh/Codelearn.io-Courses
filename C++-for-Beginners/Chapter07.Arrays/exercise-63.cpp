#include<iostream>

using namespace std;

int main() {
    int n, k,freq=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (arr[i]==k) freq++;
    }
    cout << freq;
    
    return 0;
}
