#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int at = 2;
	for (int i = 1; i < n; i++)
	{
		at = 5 * at + sqrt(24 * at * at - 8)
	}
	cout << "Ket qua la : " << at;
	return 0;
}