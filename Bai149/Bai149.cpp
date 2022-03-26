#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	cin >> a, b;
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	cout << "Ket qua la: " << a + b;
	return 0;
}