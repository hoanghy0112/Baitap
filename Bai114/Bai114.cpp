#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int at = -2, p = 3, q = 7;
	for (int i = 1; i < n; i++)
	{
		p *= 3;
		q *= 7;
		int ahh = 5 * at + 2 * p - 6 * q + 12;
		at = ahh;
	}
	cout << "Ket qua la : " << at;
	return 0;
}