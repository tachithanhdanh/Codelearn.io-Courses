#include<iostream>

using namespace std;

void show()
{
	for (int i=3;i<=100;i+=15)
	{
		for (int j=0;j<4;j++)
		{
			if (i+3*j>100) break;
			cout << i+3*j << " ";
		}	
	}
}

int main() {
	show();
	return 0;
}
