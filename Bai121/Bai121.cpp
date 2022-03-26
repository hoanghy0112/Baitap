#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int att = 1, at = 1;
	for (int i = 1; i < n; i++)
	{
		int ahh = at + att;
		at = ahh;
		att = at;
	}
	cout << "Ket qua la : " << at;
	return 0;
}