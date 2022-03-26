#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int at = 2, bt = 1;
	for (int i = 1; i < n; i++)
	{
		int ahh = 2 * bt * bt + at * at;
		int bhh = at * 2 * bt;
		at = ahh;
		bt = bhh;
	}
	cout << "Ket qua la : " << at << " " << bt;
	return 0;
}