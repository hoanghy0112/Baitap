#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int max = n % 10;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;;
		if (dv > max) max = dv;
	}

	cout << "Chu so lon nhat cua n la: " << max;

	return 0;
}