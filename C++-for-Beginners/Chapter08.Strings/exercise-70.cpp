#include<iostream>
#include <string>

using namespace std;

int main() {
    string s; char c; int a=0;
    cin >> s >> c;
    for (int i=0; i< s.size();i++)
    {
        if (s[i]==c) a++;
    }
    cout << a;
    return 0;
}
