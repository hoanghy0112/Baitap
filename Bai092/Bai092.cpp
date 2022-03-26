#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float s = 1 - x;
	float t = -x;
	int m = 1;
	for (int i = 3; i <= 2 * n + 1; i += 2)
	{
		t = t * x * (-x);
		m = m * (i - 1) * i;
		s = s + t / m;
	}

	cout << s;

	return 0;
}