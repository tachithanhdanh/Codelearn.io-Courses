#include<iostream>
#include<string>

using namespace std;

int main() {
    string s; char c; int index=-1;
    cin >> s >> c;
    for (int i=0; i<s.length();i++) 
    {
    if (s[i]==c) { index=i; break; }
    }
    cout << index;
    return 0;
}
