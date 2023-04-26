#include<iostream>

using namespace std;

int main() 
{
	int score;
	cin >> score;
	if (score<0 || score>10) cout << "The score is not valid\n";
	else cout << "The score is valid\n";
	return 0;
}
