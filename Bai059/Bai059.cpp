#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int t = n; t != 0; t /= 10)
		dem++;

	cout << "So chu so cua n la: " << dem;

	return 0;
}