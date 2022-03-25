#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s += t;
	}

	cout << s;

	return 0;
}