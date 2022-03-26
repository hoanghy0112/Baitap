#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s = x;
	int t = x;
	for (int i = 3; i <= 2 * n + 1; i += 2)
	{
		t = t * x * (-x);
		s += t;
	}

	cout << s;

	return 0;
}