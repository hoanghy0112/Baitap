#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int at = 2;
	for (int i = 1; i < n; i++)
	{
		at = (-9 * at - 24) / (5 * at + 13);
	}
	cout << "Ket qua la : " << at;
	return 0;
}