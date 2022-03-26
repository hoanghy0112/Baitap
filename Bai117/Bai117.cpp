#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int att = -1, at = 3, t = 2;
	for (int i = 1; i < n; i++)
	{
		t *= 2;
		int ahh = 5 * t + 5 * at - att;
		att = at;
		at = ahh;
	}
	cout << "Ket qua la : " << at;
	return 0;
}