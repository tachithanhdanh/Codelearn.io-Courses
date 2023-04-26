#include<iostream>
#include<string>

using namespace std;

int main() {
    string s; int k;
    getline(cin,s); cin >> k;
    cout << s[k-1];
    return 0;
}
