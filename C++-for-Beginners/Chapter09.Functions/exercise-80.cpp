#include<iostream>

using namespace std;

void show(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    cout << s << endl;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    show(s1);
    show(s2);
    show(s3);
    return 0;
}
