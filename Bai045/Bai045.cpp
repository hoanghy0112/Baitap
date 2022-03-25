#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = s + 1 / (sqrt(i) + sqrt(i + 1));

	cout << "Ket qua la: " << s;

	return 0;
}