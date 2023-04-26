#include<iostream>

using namespace std;

int main() {
    int a,b,c; cin >> a >> b;
    if(a%3==0) c=a;
    else if(a%3==1) c=a+2;
    else if(a%3==2) c=a+1;
    for(;c<=b;c+=3) cout << c << " ";
    return 0;
}
