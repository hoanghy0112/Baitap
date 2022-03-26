#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	int m = 0;
	for (int i = 1; i <= n; i += 1)
	{
		m = m + i;
		s = s + float(1) / m;
	}

	cout << s;

	return 0;
}