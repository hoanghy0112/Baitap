#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s = 0;
	int t = 1;
	int dau = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t = t * x;
		s = s + dau * t;
		dau = -dau;
	}

	cout << s;

	return 0;
}