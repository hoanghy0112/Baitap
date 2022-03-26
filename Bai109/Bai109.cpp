#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float s = 1;
	double e = 1;
	float t = 1;
	const int PRECISION = pow(10, -6);

	for (int i = 1; e >= PRECISION; i += 1)
	{
		t = t * i;
		e = 1 / t;
		s = s + e;
	}

	cout << "Ket qua la: " << s;

	return 0;
}