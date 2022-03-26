#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int at = 2;
	for (int i = 1; i < n; i++)
	{
		at = (at * at + 2) / (2 * at);
	}
	cout << "Ket qua la : " << at;
	return 0;
}