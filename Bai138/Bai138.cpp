#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, f;
	cin >> x;
	if (x >= 0)
		if (x > 1)
			f = 2 * pow(x, 3) + 5 * pow(x, 2) - 8 * x + 3;
		else
			f = 5 * pow(x, 2) - 7;
	else
		f = -2 * pow(x, 3) + 6 * pow(x, 2) + 9;
	cout << "Ket qua la: " << f;
	return 0;
}