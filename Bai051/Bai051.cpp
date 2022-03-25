#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 1;
	for (int i = 1; i <= n; i++)
		if (n % i == 0) t = t * i;

	cout << "Ket qua la: " << t;

	return 0;
}