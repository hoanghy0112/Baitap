#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float s = 0;
	double e = 1;
	float t = 0;
	const int PRECISION = pow(10, -6);

	for (int i = 1; e >= PRECISION; i += 1)
	{
		t = t + i;
		e = float(1) / t;
		s = s + e;
	}

	cout << "Ket qua la: " << s;

	return 0;
}