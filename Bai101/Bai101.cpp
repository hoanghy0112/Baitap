#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float s = 0;
	int i = 1;
	const int PRECISION = pow(10, -6);
	double e = 1;

	while (e >= PRECISION) {
		e = float(1) / i;
		s = s + e;
		i += 1;
	}

	cout << "Ket qua la: " << s;

	return 0;
}