#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int c = (n / 10) % 10;

	cout << "Chu so hang chuc la: " << c;

	return 0;
}