#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int tr = (n / 100) % 10;
	cout << "Chu so hang tram la: " << tr;

	return 0;
}