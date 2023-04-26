#include<iostream>

using namespace std;

int main() {
    int a,b,i ; cin >> a >> b;
    if(a%15==0) i=a;
    else i=a+(15-a%15);
    while(i<=b)
    {
        cout << i << " ";
        i+=15;
    } 
    return 0;
}
