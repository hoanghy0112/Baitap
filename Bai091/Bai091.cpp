#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float s = 0;
	int t = -1;
	int m = 1;
	for (int i = 2; i <= 2 * n; i += 2)
	{
		t = t * x * (-x);
		m = m * i * (i - 1);
		s = s * t / m;
	}

	cout << s;

	return 0;
}