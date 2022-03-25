#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = 2; i <= n; i += 2)
		if (n % i == 0) dem += 1;

	cout << "So luong uoc chan cua n la: " << dem;

	return 0;
}