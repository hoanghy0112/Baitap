#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dn = 0;
	for (int t = n; t != 0; t /= 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == n)
		cout << "La so doi xung ";
	else
		cout << "Khong la so doi xung ";
	return 0;
}