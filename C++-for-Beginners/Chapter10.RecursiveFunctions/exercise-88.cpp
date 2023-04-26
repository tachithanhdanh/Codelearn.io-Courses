#include <iostream>

using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) {
        n--;
        return n+sum(n-2);
    } else {
        return n+sum(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
