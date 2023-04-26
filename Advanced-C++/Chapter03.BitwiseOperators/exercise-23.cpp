#include<iostream>

using namespace std;

int main() {
	int a,ans=0; cin >> a; 
	while(a){
		if(a&1) ++ans;
		a=a>>1;
	}
	cout << "answer = " << ans;
	return 0;
}
