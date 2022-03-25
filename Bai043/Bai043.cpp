#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = s + float(1) / (i * (i + 1) * (i + 2));

	cout << "Ket qua la: " << s;

	return 0;
}