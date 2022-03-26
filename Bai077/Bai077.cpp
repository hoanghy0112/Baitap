#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int s = 0;
	for (int i = 0; i <= n; i += 1)
	{
		s = s + pow(i, k);
	}

	cout << s;

	return 0;
}