#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	int s = 1;
	for (int i = 1; i <= n; i++)
		s = s * (x + i - 1) * (x + i);

	cout << "Ket qua la: " << s;

	return 0;
}