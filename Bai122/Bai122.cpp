#include<iostream>
using namespace std;
int main()
{
	int k;
	cin >> k;
	int at = 1, bt = 1;
	for (int i = 2; i <= k; i++)
	{
		int ahh = 3 * bt + 2 * at;
		int bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
	}
	cout << "Ket qua la : " << at << " " << bt;
	return 0;
}