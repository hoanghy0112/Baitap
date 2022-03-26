#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	cin >> x;
	float s = x;
	double e = 1;
	float t = x;
	float m = 1;
	const int PRECISION = pow(10, -6);

	for (int i = 3; e >= PRECISION; i += 2)
	{
		t = t * (-x) * x;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + e;
	}

	cout << "Ket qua la: " << s;

	return 0;
}