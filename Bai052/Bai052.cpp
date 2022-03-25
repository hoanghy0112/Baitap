#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0) dem = dem + 1;

	cout << "So uoc nguyen cua n la: " << dem;

	return 0;
}