#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout << i << " ";

	cout << "Ket qua la: " << s;

	return 0;
}