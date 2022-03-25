#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;;
		if (dv % 2 == 1)
			dem += 1;
	}

	cout << "So luong chu so le cua n la: " << dem;

	return 0;
}