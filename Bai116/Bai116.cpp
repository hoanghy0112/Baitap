#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int att = 1, at = 2;
	for (int i = 1; i < n; i++)
	{
		int ahh = 4 * at + att;
		att = at;
		at = ahh;
	}
	cout << "Ket qua la : " << at;
	return 0;
}