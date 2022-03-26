#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float s = 0;
	float t = x;
	for (int i = 1; i <= n; i += 1)
	{
		t = sin(t);
		s += t;
	}

	cout << "Ket qua la: " << s;

	return 0;
}