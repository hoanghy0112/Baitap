#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int att = -1, at = 3;
	for (int i = 1; i < n; i++)
	{
		int ahh = 5 * at + 6 * att;
		att = at;
		at = ahh;
	}
	cout << "Ket qua la : " << at;
	return 0;
}