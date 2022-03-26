#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m -= n;
		else
			n -= m;
	}
	int lcm = (a * b) / (m + n);
	cout << "Ket qua la: " << lcm;
	return 0;
}