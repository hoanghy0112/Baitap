#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min = n % 10;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;;
		if (min > dv) min = dv;
	}

	cout << "Chu so nho nhat cua n la: " << min;

	return 0;
}