#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	int t = 0;
	int dau = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t += 1;
		s += float(dau) / t;
		dau = -dau;
	}

	cout << s;

	return 0;
}