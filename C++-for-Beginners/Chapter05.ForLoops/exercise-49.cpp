#include<iostream>

using namespace std;

int main() {
    int n; cin >> n;
    long long fact=1;
    if(n==0) cout << fact;
    else
    {
        for (;n>=2;n--) fact*=n;
        cout << fact;
    }
    return 0;
}
