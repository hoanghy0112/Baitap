#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = s + sqrt(1 + float(1) / (i * i) + float(1) / pow(i + 1, 2));

	cout << "Ket qua la: " << s;

	return 0;
}