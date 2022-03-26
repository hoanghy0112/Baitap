#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float s = 0;
	const int PRECISION = pow(10, -6);
	double e = 1;

	for (int i = 0; e >= PRECISION; i += 2)
	{
		e = float(1) / i;
		s = s + e;
	}

	cout << "Ket qua la: " << s;

	return 0;
}