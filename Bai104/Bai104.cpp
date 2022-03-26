#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float s = 0;
	const int PRECISION = pow(10, -6);
	double e = 1;

	for (int i = 1; e >= PRECISION; i += 1)
	{
		e = float(1) / (i * (i + 1));
		s = s + e;
	}

	cout << "Ket qua la: " << s;

	return 0;
}