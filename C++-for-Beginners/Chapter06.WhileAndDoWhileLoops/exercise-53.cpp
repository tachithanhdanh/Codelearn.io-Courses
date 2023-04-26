#include<iostream>


using namespace std;

int main() {
    int a,b,i=1; cin >> a >> b ;
    long long pow=a;
    if(b==0) cout << 1;
    else 
    {
    while(i<b)
    {
        pow*=a;
        i++;
    }
    cout << pow;
    }
    return 0;
}
