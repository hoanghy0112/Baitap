#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;;
		if (dv % 2 == 1)
			s += dv;
	}

	cout << "Tong cac chu so chan cua n la: " << s;

	return 0;
}