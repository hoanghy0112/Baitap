#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s = 0;
	int t = 1;
	int m = 0;
	for (int i = 2; i <= 2 * n; i += 2)
	{
		t = t * x;
		m = m + i;
		s = s + float(t) / m;
	}

	cout << s;

	return 0;
}