#include<iostream>

using namespace std;

int main() {
	int a, b;
	char c;
	cin >> a >> c >> b;
	switch(c)
	{
		case '+': cout << a+b; break; 
		case '-': cout << a-b; break; 
		case '*': cout << a*b; break; 
		case '/': cout << a/b; break; 	
	}
	return 0;
}
