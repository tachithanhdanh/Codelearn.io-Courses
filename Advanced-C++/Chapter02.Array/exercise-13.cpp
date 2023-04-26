#include <iostream>

using namespace std;

int getMaxValue(int* p, int n) { int max=p[0];
    for(int i=1;i<n;++i){
        if (p[i]>max) max=p[i];
    } return max;
}

int main() {
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Max value = " << getMaxValue(arr, n);
    return 0;
}
