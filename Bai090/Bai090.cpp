#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float s = 0;
	float t = 1;
	int m = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t = t * (-x);
		m = m * i;
		s = s + t / m;
	}

	cout << s;

	return 0;
}