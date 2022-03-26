#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s =  1 + x;
	int t = x;
	int m = 1;
	for (int i = 3; i <= 2 * n + 1; i += 2)
	{
		t = t * x;
		m = m * i * (i - 1);
		s = s + float(t) / m;
	}

	cout << s;

	return 0;
}