#include<iostream>
#include<string>

using namespace std;

void show(string i)
{
	cout << "Hello " << i;
}

int main() {
	string name;
	cin >> name;
	show(name);
	return 0;
}
