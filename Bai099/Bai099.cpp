#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i += 1)
	{
		s = pow(s + i, float(1) / (i + 1));
	}

	cout << s;

	return 0;
}