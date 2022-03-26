#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s = 1;
	int t = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t = t * x;
		s = s + t * (i + 1);
	}

	cout << s;

	return 0;
}