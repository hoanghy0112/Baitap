#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float s = 0;
	int t = 1;
	for (int i = 1; i <= n; i += 1)
	{
		t = t * x;
		s = pow(t + s, float(1) / (i + 1));
	}

	cout << "Ket qua la: " << s;

	return 0;
}