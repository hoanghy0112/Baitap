#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double s = 0;
	for (int i = 1; i <= n; i++)
		s = s * (i + float(1) / (i * i));

	cout << "Ket qua la: " << s;

	return 0;
}