#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int product = 1;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;;
		if (dv % 2 == 1)
			product *= dv;
	}

	cout << "Tich cac chu so le cua n la: " << product;

	return 0;
}