#include<iostream>

using namespace std;

int main() {
	int n,a=2,i=1; cin >> n;
	while(a<=n)
	{
		if (n%a==0) i++;
		a++;
	}
	cout <<i;
	return 0;
}
