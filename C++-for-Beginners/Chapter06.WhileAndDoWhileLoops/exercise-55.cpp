#include<iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i<=50)  cout << i << " ";
        else break;
    }
    return 0;
}
