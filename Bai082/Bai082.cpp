#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float s = 0;
	float t = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t = t * sin(x);
		s = s + t;
	}

	cout << s;

	return 0;
}