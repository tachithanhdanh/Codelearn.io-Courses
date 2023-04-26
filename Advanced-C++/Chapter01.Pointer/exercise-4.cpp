#include <iostream>

using namespace std;

void change(int *a) {
    ++(*a);
}

int main() {
    int a;
    cin >> a;
    change(&a);
    cout << "New value of a: " << a;
    return 0;
}
